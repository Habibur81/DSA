#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3], i, j, sum = 0;

    for( i=0; i<3; i++){
        for( j=0; j<3; j++){
            cout << "Enter Element = " << " ";
            cin >> arr[i][j];
        }
    }

    for( i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i>=j)
                sum += arr[i][j];
        }
    }

    cout << "Lower Triangular element = " << sum << endl;


    return 0;
}