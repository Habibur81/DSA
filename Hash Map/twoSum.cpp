#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {2,7,11,15}; 
    int target = 9;

    unordered_map<int, int> my_map; // To store value and its index
    int len = nums.size();

    for (int i = 0; i < len; i++) {
        int complement = target - nums[i]; // The number needed to reach the target
        //cout << complement << endl;
        // If the complement exists in the map, return the indices
        if (my_map.find(complement) != my_map.end()) {
            cout << my_map[complement] << i << endl; // Return the indices of the two numbers
        }
        // Store the current number and its index in the map
        my_map[nums[i]] = i;
    }

    

        // If no solution is found, return an empty vector
    //cout << "element is not found!";

    return 0;
}