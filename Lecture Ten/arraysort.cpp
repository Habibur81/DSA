#include <iostream>
using namespace std;

void sortArr(int arr[], int len){

    for(int i = 0; i < len-1; i++){
        for(int j = i+1; j < len; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
}

int main(){

    int arr[8] = {0,1,1,0,0,2,0,2};
    int len = sizeof(arr)/sizeof(arr[0]);
   
    sortArr(arr, len);
   
    for(int i = 0; i < len; i++){
        cout << arr[i] << " \t";
    }


    return 0;
}