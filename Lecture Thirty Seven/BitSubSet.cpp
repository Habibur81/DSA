#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums){
    int len = nums.size();
    //cout << len << endl;
    int subset_ct = (1 << len);
    //cout << subset_ct << endl;

    vector<vector<int>>subsets;

    for(int mask = 0; mask < subset_ct; mask++){
        vector<int>subset;
        for(int i = 0; i < len; i++){
            //cout << (1 << i) << endl;    
            //cout << (mask & (1 << i) ) << endl; 
            if( (mask & (1 << i) ) != 0){
                subset.push_back(nums[i]);
            }
        }

        subsets.push_back(subset);
    }

}

int main(){

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    auto subset = subsets(v);

    

    for(auto sub : subset){
        for(auto s : sub){
            cout << s << " ";
        }
        cout << endl;
    }  

    return 0;
}