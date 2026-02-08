#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>ThreeSum(vector<int>& nums){
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    

    for(int i = 0; i < n; i++){
        //duplication check for i
        if(i > 0 && nums[i]==nums[i-1]){
            continue;
        }

        int left = i + 1;
        int right = n - 1;

        while(left < right){
            int threeSum = nums[i] + nums[left] + nums[right];

            if(threeSum == 0){
                ans.push_back({nums[i], nums[left], nums[right]});
                while(left < right && nums[left] == nums[left+1]){
                    left++;
                }

                while(left < right && nums[right] == nums[right-1]){
                    right--;
                }
                left++;
                right--;  
            }else if(threeSum < 0){
                left++;
            }else{
                right--;
            }                        
        }     
 
    }

    return ans;
}


int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};  
        
   vector<vector<int>> ans = ThreeSum(nums);

   for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}