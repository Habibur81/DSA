#include <bits/stdc++.h>
using namespace std;

int subArrSum(vector<int>& nums){
    if(nums.empty()){
        return 0;
    }

    int n = nums.size();
    int currSum = nums[0];
    int maxSubArrSum = nums[0];

    for(int i = 1; i < n; i++){
        currSum = max(nums[i], currSum + nums[i]);
        maxSubArrSum = max(maxSubArrSum, currSum);
    }

    return maxSubArrSum;
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = subArrSum(nums);

    cout << "Sub Array Sum = " << result << endl;
    return 0;
}