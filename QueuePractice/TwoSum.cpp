#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&nums, int target){
    unordered_map<int, int> myMap;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        int fnd = target - nums[i];
        if(myMap.find(fnd) != myMap.end()){
            return {myMap[fnd], i};
        }
        myMap[nums[i]] = i;
    }

    return {};

}


int main(){
    vector<int>nums = {2, 7, 11, 4};
    int target = 11;

    vector<int>result;
    result = twoSum(nums, target);

    cout << result[0] << " " << result[1]; 



    return 0;
}
