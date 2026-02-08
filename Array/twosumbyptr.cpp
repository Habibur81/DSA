#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int>nums, int target){
    vector<pair<int, int>> store_Data;
    int left = 0, right = nums.size() - 1;
    vector<int>result;
    for(int i=0; i<nums.size(); i++){
        store_Data.push_back({nums[i], i});
    }
    sort(store_Data.begin(), store_Data.end());

    while(left < right){
        int sum = store_Data[left].first + store_Data[right].first;
        if(sum == target){
            result = {store_Data[left].second, store_Data[right].second};
            return result;
        }else if(sum < target){
            left++;
        }else{
            right--;
        }
    }

    return result;
    
}

int main(){
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> result;
    result = twosum(nums, target);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}