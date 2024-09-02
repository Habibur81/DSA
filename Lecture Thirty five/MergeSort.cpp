#include <iostream>
using namespace std;

void merge(int arr[], int fidx, int lidx){

    int m = fidx + (lidx - fidx)/2;
    int len1 = m - fidx + 1;
    int len2 = lidx - m;

    int larr[len1];
    int rarr[len2];

    //int* larr = new int[len1]; // dynamic memory allocation heap memory
    //int* rarr = new int[len2]; // dynamic memory allocation heap memory
    
    int aidx = fidx; //left side array
    for(int i = 0; i < len1; i++){
        larr[i] = arr[aidx];
        aidx++;
    }
    int maidx = m + 1; //right side array
    for(int i = 0; i < len2; i++){
        rarr[i] = arr[maidx];
        maidx++;
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

    while (j < len1)
    {
        arr[k] = rarr[j];
        j++;
        k++;
    } 
}

void MSort(int arr[], int fidx, int lidx){
    if(fidx >= lidx)
        return;
    
    int mid = fidx + (lidx - fidx)/2;
   // cout << "Mid value = " << mid << endl;

    MSort(arr, fidx, mid);
    MSort(arr, mid+1, lidx);
    merge(arr, fidx, lidx);
}

int main(){

    int arr[5] = {3, 7, 0, 1, 5};
    int fidx = 0;
    int lidx = 4;

    MSort(arr, fidx, lidx);

    for(int i = 0; i <= lidx; i++){
        cout << arr[i] << " ";
    }cout << endl;

}