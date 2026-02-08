#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {5, 4, 1, 7, 8};

    int sum = nums[0];

    for(int i=1; i<nums.size(); i++){

        sum += nums[i];

        if(sum < 0){
            sum = max(nums[i], nums[i-1]);
        }
    }

    cout << sum << endl;

    return 0;
}