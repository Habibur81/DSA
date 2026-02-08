#include <bits/stdc++.h>
using namespace std;

int maximunSum(vector<int> &arr, int k){

    int maxSum = INT_MIN;
    int windowSum = 0;
    int left = 0;
    int n = arr.size();

    for(int right = 0; right < n; right++){
        windowSum += arr[right];
        if(right >= k-1){
            maxSum = max(maxSum, windowSum);
            windowSum -= arr[left];
            left++;
        }
    }

    return maxSum;
}

int main(){
    vector<int> arr  = {2, 1, 5, 1, 3, 2};
    int maxSum = maximunSum(arr, 3);
    cout << maxSum << endl;

    return 0;
}