#include <iostream>
using namespace std;

void swapalter(int arr[], int length){
    int i = 0;
    int j = 1;

    while (j < length)
    {
        swap(arr[i], arr[j]);
        i = i+2;
        j = j+2;
    }

}

void printArray(int arr[], int length){
    for(int i = 0; i < length; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){

    int arr[6] = {1, 2, 3, 4, 5, 7};
    int size = sizeof(arr)/sizeof(int);

    int odd[5] = {6, 7, 9, 10, 11};
    int length = sizeof(odd)/sizeof(int);

    // swapalter(arr, size);
    // printArray(arr, size);

    swapalter(odd, length);
    printArray(odd, length);


    return 0;
}