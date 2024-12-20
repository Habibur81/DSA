#include<bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int> nums, int k){

    unordered_map<int, int> uomap;

    for(int num : nums){
        uomap[num]++;
    }

   priority_queue< pair<int, int>,  vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for(const auto& pair : uomap){
        cout << pair.first << " " << pair.second << endl;
        pq.push({pair.second, pair.first});
        if(pq.size() > k){
            pq.pop();
        }
    }

    vector<int> ans;

    while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
    }

    return ans;
}

int main(){

    vector<int> nums = {1, 2, 4};

    int k = 2;

    vector<int> result = topKFrequent(nums, k);

    // cout << "Top " << k << " frequent elements: ";
    // for (int num : result) {
    //     cout << num << " ";
    // }

    return 0;
}