#include <iostream>
using namespace std;

int partision(int arr[], int sidx, int eidx){

    int pivot = arr[eidx];    
    
    int CLElement = 0;

    for(int k = sidx; k <= eidx; k++){

        if(arr[k] < pivot){
            CLElement++;
        }
    }

    int pivotindex = sidx + CLElement;
    swap(arr[eidx] ,arr[pivotindex]);
    
    int i = sidx;
    int j = eidx;

    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j++;
        }        

        if(i < pivotindex && j > pivotindex){
            swap(arr[i++], arr[j--]);
        }           
    }
    

    return pivotindex;



}

void QuickSort(int arr[], int sidx, int eidx){
    if(sidx >= eidx)
        return;
    
    int pivotindex = partision(arr, sidx, eidx);

    QuickSort(arr, sidx, pivotindex - 1);
    QuickSort(arr, pivotindex + 1, eidx);

}

int main(){

    int arr[9] = {10, 80, 30, 90, 40, 10, 20, 60, 70};
    int sidx = 0;
    int eidx = sizeof(arr)/sizeof(arr[0]) - 1;

    QuickSort(arr, sidx, eidx);

    for(int i = 0; i <= eidx; i++){
        cout << arr[i] << " ";
    }cout << endl;


    return 0;
}