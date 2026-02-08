#include <iostream>
using namespace std;

bool isPresent(int arr[3][3], int target, int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }

    return 0;
}

void RowBySum(int arr[][3], int n, int m){
    cout << "Row Printing Sum -> ";

     for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += arr[i][j];
        }

        cout << sum << ' ';
    }

    cout << endl;
}

void ColBySum(int arr[][3], int n, int m){
    cout << "Col Printing Sum -> ";

     for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += arr[j][i];
        }

        cout << sum << ' ';
    }

    cout << endl;
}

int largestRowSum(int arr[][3], int n, int m){

    int maxSum = INT_MIN;
    int rowIndex = -1;
    cout << "Row Largest Sum -> ";

    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += arr[i][j];
        }

        if(sum > maxSum){
            maxSum = sum;
            rowIndex = i;
        }
    }

    cout << maxSum << ' ';

    cout << endl; 

    return rowIndex;

}

int main(){

    int arr[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

 /*   cout << "Enter a Number: " <<endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 3)){
        cout << "Is found" << endl;
    }else{
        cout << "Not found" << endl;
    }    


    RowBySum(arr, 3, 3);

    ColBySum(arr, 3, 3);

    */

  int index = largestRowSum(arr, 3, 3);

  cout << "Row index Number is -> " << index << endl;


    return 0;
}