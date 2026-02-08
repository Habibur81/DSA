#include<bits/stdc++.h>
using namespace std;

int thirdMax(vector<int>nums){

    long len = nums.size();
    long fmax = LONG_MIN;
    long smax = LONG_MIN;
    long tmax = LONG_MIN;

    for(int i = 0; i < len; i++){
        if(nums[i] == fmax || nums[i] == smax || nums[i] == tmax) continue;

        if(fmax < nums[i]){
            tmax = smax;
            smax = fmax;
            fmax = nums[i];
        }else if(nums[i] > smax){
            tmax = smax;
            smax = nums[i];
        }else if(nums[i] > tmax){
            tmax = nums[i];
        }
    }

    return (tmax == LONG_MIN) ? fmax : tmax;
}

int main(){
    vector<int>nums = {1,1,2,}; 

    cout << thirdMax(nums) << endl;

    return 0;
}