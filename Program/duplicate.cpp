#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {-336,513,-560,-481,-174,101,-997,40,-527,-784,-283,-336,513,-560,-481,-174,101,-997,40,-527,-784,-283,354};
    sort(nums.begin(), nums.end());
    int len = nums.size();
    int len2 = len - 1; 
    int ans = 0;
    int i;
    
    for( i=0; i<len; i+=2){
        if(len == 1){
            break;
        }else if(nums[i] != nums[i+1]){
            ans = nums[i];
            break;
        }
    }

    if(ans == 0){
        ans = nums[i];
    }

    cout << ans << endl;

    return 0;
}