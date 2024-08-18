#include <iostream>
using namespace std;

int main(){
    int row;
    int col;
    cout << "Please enter row size = ";
    cin >> row;
    cout << "Please enter col size = ";
    cin >> col;

    //Create 2D array
    int** arr = new int* [row];
    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
    }

    //2D array input
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    //2D array output
    cout << "Result " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}