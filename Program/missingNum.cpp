#include <bits/stdc++.h>
using namespace std;

int main(){

        vector<int> nums = {2,1};

        sort(nums.begin(), nums.end());
        int len = nums.size();
        int ans = len;

        for(int i=0; i<len; i++){
            if(i != nums[i]){
                ans = i;
                break;
            }
        }

       cout << ans << endl;


    return 0;
}