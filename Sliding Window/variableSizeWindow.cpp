#include <bits/stdc++.h>
using namespace std;

int minimunLen(vector<int>&arr, int target){
    int minLen = INT_MAX;
    int windowSum = 0;
    int left = 0;
    int n = arr.size();

    for(int right = 0; right < n; right++){
        windowSum += arr[right];
        
        while(windowSum >= target){
            minLen = min(minLen, right - left + 1);
            windowSum -= arr[left];
            left++;
        }
        
    }

    return (minLen == INT_MAX) ? 0 : minLen;
}


int main(){

    vector<int> arr =  {2, 1, 5, 2, 3, 2};
    int target = 7;

    cout << minimunLen(arr, target) << endl;

    return 0;
}