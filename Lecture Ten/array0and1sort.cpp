#include <iostream>
using namespace std;

void sortArr(int arr[], int len){
    int i = 0;
    int j = len - 1;

    while (i < j)
    {
        if(arr[i] == 0){
            i++;
        }else if(arr[j] == 1){
            j--;
        }else if(arr[i] == 1 && arr[j] == 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    
}

int main(){

    int arr[8] = {0,1,1,0,0,1,0,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    sortArr(arr, len);

    for(int i = 0; i < len; i++){
        cout << arr[i] << "\t";
    }


    return 0;
}