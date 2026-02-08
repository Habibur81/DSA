#include <bits/stdc++.h>
using namespace std;

int main(){

        int rowIndex = 4;
        int len = rowIndex + 1;
        vector<vector<int>>arr(len);

        for(int i=0; i<len; i++){
            for(int j=0; j<len; j++){
                arr[i][j] = 0;
            }            
        }

        // arr[len-1] = 1;
        // int i = len - 2;

        // while(i >= 0){
        //     for(int j=i; j<len-1; j++){
        //         cout << arr[j] + arr[j+1] << endl;
        //         arr[j] = arr[j] + arr[j+1];
        //     }
        //     cout << endl;
        //     i--;
        // }

    //return arr;

    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){
            cout << arr[i][j] << " ";
        }        
    }

    // cout << endl;

    return 0;
}