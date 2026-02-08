#include <iostream>
using namespace std;

int main(){
    cout << "Please enter array size " << endl;
    int n;
    cin >> n;

    //Square 2D array creation in dynamic memory
    int** arr = new int* [n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[n];
    } 

    cout << "Please enter array value " << endl;
    //input value in array
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    //input value in array
    cout << "Result " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //releasing memory
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}