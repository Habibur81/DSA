#include <iostream>
using namespace std;

int binarySearch(int arr[], int len, int ele){
    int start = 0;
    int end = len - 1;

    while (start <= end)
    {
        int mid = start + (end - start)/2;

       if(arr[mid] == ele){
            return mid;
       }

       if(ele > arr[mid]){
            start = mid + 1;
       }else{
            end = mid - 1; 
       }
    }

    return -1;
    
}

int main(){

    int Earray[6] = {2,3,4,5,7,8};
    int Oarray[5] = {10,30,50,80,100};

    int size = 6;
    int size2 = 5;

    int ele = 3;

    int index = binarySearch(Earray, size, ele);
    cout << ele << " element find " << index << " number index in array" << endl;

    return 0;
}