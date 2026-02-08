#include <iostream>
using namespace std;

int partisionFuc(int arr[], int findex, int lindex){

    int pivotValue = arr[findex];
    int cnt = 0;
    for(int i=findex+1; i<=lindex; i++){
        if(arr[i] <= pivotValue){
            cnt++;
        }
    }

    int pivotindex = findex + cnt;
    swap(arr[findex], arr[pivotindex]);

    int i = findex, j = lindex;

    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] < pivotValue)
        {
            i++;
        }

        while (arr[j] > pivotValue)
        {
            j--;
        }

        if(i < pivotindex && j > pivotindex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        
    }
    

    return pivotindex;
}

void QuickSort(int arr[], int findex, int lindex){
    if(findex >= lindex){
        return;
    }
    
   int p =  partisionFuc(arr, findex, lindex);

    QuickSort(arr, findex, p - 1);
    QuickSort(arr, p + 1, lindex);
}

int main(){
    int arr[] = {10, 80, 30, 90, 40, 10, 20, 60, 70};
    int findex = 0;
    int arrSize = sizeof(arr) / sizeof(arr[0]) - 1;    

    QuickSort(arr, findex, arrSize);

    for(int i = 0; i < arrSize; i++){
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}