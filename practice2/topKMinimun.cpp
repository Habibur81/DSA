#include <bits/stdc++.h>
using namespace std;

vector<int> topKMinimum(vector<int>& nums, int k){
    priority_queue<int> max_pq;
    vector<int> result;

    for(int num : nums){
        max_pq.push(num);
        if(max_pq.size() > k)
            max_pq.pop();
    }

    while(!max_pq.empty()){
        result.push_back(max_pq.top());
        max_pq.pop();
    }

    return result;
}

int main(){
    std::vector<int> nums = {3, 1, 5, 12, 2, 11};
    auto result = topKMinimum(nums, 3);

    cout << "Top Minimun k element = ";
    for(int num : result){
        cout << num << " ";
    }

    return 0;
}