#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int f, int l, int target){
    while(f <= l ){
        int mid = f + (l - f) / 2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] < target){
            f = mid + 1;   
        }else{
            l = mid - 1;
        }
    }
    
    return -1;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int target = 5;
    int f = 0;
    int l = sizeof(arr) / sizeof(arr[0]) - 1;

   int ind = binarysearch(arr, f, l, target);

   cout << ind << endl;

    return 0;
}