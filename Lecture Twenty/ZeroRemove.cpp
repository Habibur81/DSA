#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[6] = {2, 0, 1, 3, 0, 0};
    int len = 6; //sizeof(arr) / arr[1];
    int i = 0, j = 1;
    //cout << len << endl;

    while(j < len){
        if(arr[i] != 0){
            i++;
           // cout << i << endl;
        }else if(arr[j] == 0){
            j++;
           // cout << j << endl;
        }else{
            int tmp = arr[j];
            arr[j] = arr[i];
            arr[i] = tmp;

          //  cout << arr[i] << endl;
        }
    }

    for(int k = 0; k < len ; k++){
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}