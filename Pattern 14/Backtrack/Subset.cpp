#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void backtrack(int index, vector<int>& nums, vector<int> curr, vector<vector<int>>& result){
            if(index == nums.size()){
                result.push_back(curr);
                return;
            }
            // Choice 1: Include nums[index]
            curr.push_back(nums[index]);

            backtrack(index+1, nums, curr, result);

            curr.pop_back(); // Undo the choice (backtrack)

            // Choice 2: Exclude nums[index]
            backtrack(index+1, nums, curr, result);




        }

        vector<vector<int>> subsets(vector<int>& nums){
            vector<int> curr;
            vector<vector<int> result;
            backtrack(0, nums, curr, result);
            return result;
        }
};



int main(){
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = subsets(nums);

    return 0;
}