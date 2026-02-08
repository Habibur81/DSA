#include <iostream>
using namespace std;

void merge(int arr[], int fidx, int mid, int lidx){

    int len1 = mid - fidx + 1;
    int len2 = lidx - mid;

    int larr[len1], rarr[len2];

    int idx = fidx;
    for(int i = 0; i < len1; i++){
        larr[i] = arr[idx++]; 
    }

    int idx2 = mid+1;

    for(int i = 0; i < len2; i++){
        rarr[i] = arr[idx2++];   
    }

    int i = 0;
    int j = 0;
    int k = fidx;

    while (i < len1 && j < len2){
        if(larr[i] <= rarr[j]){
            arr[k] = larr[i];
            i++;
        }else{
            arr[k] = rarr[j];
            j++;
        }
        k++;
    }

    while (i < len1)
    {
        arr[k] = larr[i];
        i++;
        k++;
    }

    while (i < len1)
    {
        arr[k] = rarr[j];
        j++;
        k++;
    } 



}

void MergeSort(int arr[], int fidx, int lidx){
    if(fidx >= lidx)
        return;

    int mid = fidx + (lidx - fidx)/2;

    MergeSort(arr, fidx, mid);
    MergeSort(arr, mid+1, lidx);

    merge(arr, fidx, mid, lidx);
}

int main(){

    int arr[6] = {10, 5, 2, 7, 3, 8};
    int fidx = 0;
    int lidx = sizeof(arr)/sizeof(arr[0]) - 1;

    MergeSort(arr, fidx, lidx);

    for(int i = 0; i <= lidx; i++){
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}