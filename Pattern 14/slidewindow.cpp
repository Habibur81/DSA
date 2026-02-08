#include <bits/stdc++.h>
using namespace std;

// Type of sliding window 
// 2 type of sliding window
// 1. fix sized sliding window
// 2. variable sized sliding window

// fixed size sliding window
int maxSubarraySum(vector<int>& nums, int k){
    int maxSum = 0;
    int maxNum = 0;
    int s = nums.size();
    
    for(int i = 0; i < k; i++){
        maxSum += nums[i];
    }

    maxNum = maxSum;

    for(int i = k; i < s; i++){
        maxSum += nums[i] - nums[i - k];
        maxNum = max(maxNum, maxSum); 
    }

    return maxNum;

}

//variable size sliding window
int lengthOfLongestSubstring(string str){
    unordered_set<char>window;
    int n = str.length();
    int right = 0, left = 0, maxLen = 0;

    while(right < n){
        // this condition check the character not in set
        if(window.find(str[right]) == window.end()){
            window.insert(str[right]);
            maxLen = max(maxLen, right - left + 1);
            right++;
        }else{
            window.erase(str[left]);
            left++;
        }

    }
}

int main(){

    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 3;

    int result = maxSubarraySum(nums, k);

    cout << result << endl;

    string str = "abcabcbb";

    int LengthOfstring = lengthOfLongestSubstring(str);

    return 0;
}