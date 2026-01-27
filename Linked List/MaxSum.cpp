#include<bits/stdc++.h>
using namespace std;

int MaxSum(vector<int>& nums){
    int currentSum = nums[0];
    int MaxSum = nums[0];

    for(int i = 1; i < nums.size(); i++){
        currentSum = max(nums[i], currentSum+nums[i]);
        MaxSum = max(currentSum, MaxSum);
    }

    return MaxSum;
}


int main(){
        
    vector<int> nums =  {-2,-1,-3,-4,-1,-2,-1,-5,-4};

    cout << MaxSum(nums) << endl;
    
    return 0;
}