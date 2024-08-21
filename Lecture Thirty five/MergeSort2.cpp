#include <iostream>
using namespace std;

void merge(int* arr, int findex, int mid, int lindex){

    //int mid = findex - (lindex - findex)/2;
    int len1 = mid - findex + 1;
    int len2 = lindex - mid;
    //cout << "Hello"<< endl;
    int temArray1[len1], temArray2[len2];

    for(int i = 0; i < len1; i++){
        temArray1[i] = arr[findex + i];
      //  cout << temArray1[i] << endl;
    }

    for(int i = 0; i < len2; i++){
        temArray2[i] = arr[mid + 1 + i];
     //   cout << temArray2[i] << endl;
    }

    int i = 0, j = 0, k = findex;
    while(i < len1 && j < len2){
        if(temArray1[i] < temArray2[j]){
            arr[k] = temArray1[i++];
        }else{
            arr[k] = temArray2[j++];
        }
        k++;
    }

    while (i < len1)
    {
        arr[k] = temArray1[i++];
        k++;
    }

    while (j < len2)
    {
        arr[k] = temArray2[j++];
        k++;
    }
    
    

}

void mergeSort(int* arr, int findex, int lindex){

    if(findex < lindex){
        int mid = findex + (lindex - findex)/2;
        mergeSort(arr, findex, mid);
        mergeSort(arr, mid+1, lindex);
        merge(arr, findex, mid, lindex);
    }    

}

int main(){
    int arr[5] = {4, 7, 1, 2, 3};
    int findex = 0;
    int lindex = 5-1;

    mergeSort(arr, findex, lindex);

    for(int i = 0; i <= lindex; i++){
        cout << arr[i] << " ";
    }

    return 0;
}