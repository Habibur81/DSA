#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,4,6,1};
    map<int, int>mymap;

    for(auto num : nums){
        mymap[num] = true;
    }

    for(int i=1; i<=6; i++){
        if(mymap[i] != true){
            cout << i << endl;
        }
    }

    // for(auto ans : mymap){
    //     cout << "first - " << ans.first << " second - " << ans.second << endl;
    // }

    return 0;
}