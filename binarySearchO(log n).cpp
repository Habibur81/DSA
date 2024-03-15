#include <iostream>
#include <array>
using namespace std;

int binarySearch(int arr[], int start, int end, int target){
    int mid = (start + end) / 2;
   
    if(arr[mid] == target)  return mid;

    if(target < arr[mid]){
        binarySearch(arr, start, mid-1, target);
    }else if(target > arr[mid]){
        binarySearch(arr, mid+1, end, target);
    }
 


}

int main(){
    int arr[] = {10, 20, 30, 5, 50};
    int start = 0;
    int arrSize = sizeof(arr)/sizeof(arr[0]);
        arrSize = arrSize-1;
    int target = 20;

   cout<<target<< " index is "<<binarySearch(arr, start, arrSize, target)<<endl;

   return 0;
}