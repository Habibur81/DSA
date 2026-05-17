#include <bits/stdc++.h>
using namespace std;

int recursiveBinarySearch(vector<int>& arr, int left, int right, int target){
    if (left > right) {
        return -1; // Target not found
    }

    int mid = left + (right - left) / 2; // Calculate the middle index

    if (arr[mid] == target){
        return mid; // Target found at index mid
    }
    else if (arr[mid] > target){
        return recursiveBinarySearch(arr, left, mid - 1, target); // Search in the left half
    }
    else{
        return recursiveBinarySearch(arr, mid + 1, right, target); // Search in the right half
    }
}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;
    int left = 0, right = arr.size() - 1;
    int result = recursiveBinarySearch(arr, left, right, target);

    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    
    return 0;
}