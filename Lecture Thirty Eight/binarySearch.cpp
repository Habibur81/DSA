#include <iostream>
using namespace std;

int search(int arr[], int left, int right, int TValue){
    int mid;
    while (left <= right)
    {
       mid = left + (right - left) / 2;

        if(arr[mid] == TValue){
            return mid;
        }else if(TValue < arr[mid]){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }

    return -1;
    
     

}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int TValue = 1;
    int left = 0;
    int right = sizeof(arr) / sizeof(arr[0]) - 1;
    

    int indx = search(arr, left, right, TValue);
    
    if(indx >= 0){
        cout << "find the element " << endl;
    }else{
        cout << "Not find the element " << endl;
    }
    

    return 0;
}