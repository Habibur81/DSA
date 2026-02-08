#include <iostream>
using namespace std;

void sortArr(int arr[], int len){
    int low = 0;
    int mid = 0;
    int high = len - 1;
    int temp;
    int stp = 0;

    while (mid < high)
    {   
        for(int i = 0; i < len; i++){
            cout << arr[i] << " ";
        }cout << endl;

        if(arr[mid] == 0){
            temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            mid++;
            low++;
        }else if(arr[mid] == 1){
            mid++;
        }else if(arr[mid] == 2){
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
    
    
}

int main(){

    int arr[6] = {2, 0, 2, 1, 1, 0};
    int len = sizeof(arr)/sizeof(arr[0]);
   
    sortArr(arr, len);
   
    // for(int i = 0; i < len; i++){
    //     cout << arr[i] << "\t";
    // }


    return 0;
}