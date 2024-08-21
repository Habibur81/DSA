#include <iostream>
using namespace std;

void bubbleSort(int* arr, int e){
    if(e == 0){
        return ;
    }

    for(int i = 0; i < e; i++){
        if(arr[i] > arr[i+1]){
            int tem = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tem;
            //swap(arr[i], arr[i+1]);
        }
    }

    bubbleSort(arr, e - 1);

}

int main(){

    int arr[5] = {10, 20, 5, 15, 3};
    int size = 5;

    bubbleSort(arr, size-1);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}