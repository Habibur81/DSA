#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,0,1,1};
    int k = 1;
    map<int, int> mymap;

    for(int i=0; i<nums.size(); i++){
        if(mymap.find(nums[i]) != mymap.end()){
            if(i - mymap[nums[i]] <= k){
                cout << "true" << endl;
            }
        }        
        mymap[nums[i]] = i;      
    }

    // for(auto it : mymap){
    //     cout << "val=" << it.second << " key=" << it.first << endl;
    // }

    return 0;
}