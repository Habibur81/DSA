#include <bits/stdc++.h>
using namespace std;

int main(){
    int nums[6] = {2, 4, 6, 8, 10, 12};
    int target = 20;

    int left = 0;
    int right = sizeof(nums) / sizeof(nums[0]) - 1;

    while(left <= right){
        int idx = left + (right - left) / 2;

        if(nums[idx] == target){
            cout << "Found at index = " << idx << endl;
            return 0;
        }else if(nums[idx] > target){
            right = idx - 1; 
        }else{
            left = idx + 1;
        }
    }

    cout << "Not found " << endl;


    return 0;
}