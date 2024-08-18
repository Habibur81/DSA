#include <iostream>
using namespace std;

void func(int arr[], int size, int start = 0){
    for(int i = start; i < size; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[5] = {1, 3, 6, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    //cout << size << endl;

    func(arr, size);
    cout << endl;
    func(arr, size, 2);

    return 0;
}