#include <iostream>
using namespace std;

void arrayReverse(int arr[], int size){

    int i = 0;
    int j = size - 1;
    int temp;

    while (i <= j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
    
}

int printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[100] = {4, 2, 10, 1, 5}; //output {1, 2, 4};
    int size = 5;

    arrayReverse(arr, size);
    printArray(arr, size);

    return 0;
}