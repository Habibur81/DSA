#include <iostream>
#include <map>
#include <unordered_map>
#include<algorithm>
#include <vector>
using namespace std;

// bool present(int nums[], int len, int n){
//     for(int i=0; i<len; i++){
//         if(nums[i] == n){
//             return true;
//         }
//     }

//     return false;
// }

int main(){
    vector<int> nums = {3,4,-1,1};
    int len = nums.size();
    sort(nums.begin(), nums.end());
    int target = 1;
    for (int n : nums) {        
        if (n > 0 && n == target) {
            target++;
        } else if (n > target) {
            cout << target << endl;
        }
    }



    // bool arr[100002];

    // for(int i=0; i<4; i++){
    //     if(nums[i]>0 && nums[i]<100002){
    //         arr[nums[i]] = true;
    //     }
    // }
    // for(int i=0; i < nums.size(); i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // int ans=0;
    // for(int i=1; i<100002; i++){
    //     if(!arr[i]){
    //         ans=i;
    //         break;
    //     }
    // }

    //cout << ans << endl;

    return 0;
}