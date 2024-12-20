#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {3,3,4};

        map<int, int>ans;

        for(int i=0; i<=nums.size()-1; i++){
            ans[nums[i]] += 1;
        }
        int key = 0;
        int value = 0;

        for(auto n : ans){
            if(value < n.second){
                cout << "key = " << n.first << " value = " << n.second << endl;
                value = n.second;
                key = n.first;
            }
        }

        cout << key << endl;

    return 0;
}