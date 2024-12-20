#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int>nums, int target){
    unordered_map<int, int> search_map;
    vector<int> result;

    for(int i=0; i<nums.size(); i++){
        int search_num = target - nums[i];
        if(search_map.find(search_num) != search_map.end()){
            result = {search_map[search_num], i};
            return result;
        }

        search_map[nums[i]] = i; 
    }

    return result;
}

int main(){
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> result;
    result = twosum(nums, target);

    cout << result[1] << endl;

    return 0;
}