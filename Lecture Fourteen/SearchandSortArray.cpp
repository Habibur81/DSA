#include <iostream>
using namespace std;

int pivotTable(int arr[], int n){
    int s = 0;
    int e = n - 1;
    

    while (s < e)
    {
        int m = s + (e - s) / 2;

        if(arr[m] >= arr[0]){
            s = m + 1;
        }else{
            e = m;
        }

        
    }
    
    return s;
}

int BinarySearch(int arr[], int st, int ed, int key){
    
    int s = st;
    int e = ed - 1;
    int m = s + (e - s) / 2;

    if(arr[m] == key){
        return m;
    }else if(arr[m] > key){
        e = m - 1;
    }else if(arr[m] < key){
        s = m + 1;
    }

    return -1;
}

int main(){

    int arr[5] = {7, 9, 1, 2, 3};

    int pivotIndex = pivotTable(arr, 5);
    int key = 2;

    if(arr[pivotIndex] <= key && key <= arr[5-1] ){
        cout << BinarySearch(arr, pivotIndex, 5, key) <<endl;
    }else{
        cout << BinarySearch(arr, 0, pivotIndex - 1, key) <<endl;
    }


    return 0;
}