#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {1,3,2,2,5,2,3,7};

    sort(nums.begin(), nums.end()); // time complexity O(n Log n)
    // [1, 2, 2, 2, 3, 3, 5, 7]

    int maxLen = 0;

    int p1 = 0;
    
    for(int p2 = 0; p2 < nums.size(); p2++){

        while(nums[p2] - nums[p1] > 1){
            p1++;
        }

        if(nums[p2] - nums[p1] == 1){
            maxLen = max(maxLen, p2 - p1 + 1);
        }
        
    }
    

    cout << maxLen << endl;
        

    return 0;
}