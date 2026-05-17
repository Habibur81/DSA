#include <bits/stdc++.h>
using namespace std;

vector<int> TopKElement(vector<int>& nums, int k){
    priority_queue<int, vector<int>, greater<int>> min_pq;
    for(int num : nums){
        min_pq.push(num);
        if(min_pq.size() > k)
            min_pq.pop();
    }

    vector<int> result;

    while (!min_pq.empty())
    {
        result.push_back(min_pq.top());
        min_pq.pop();
    }
    

    return result;
}

int main(){

    std::vector<int> nums = {3, 1, 5, 12, 2, 11};
    auto result = TopKElement(nums, 3);


    cout << "Top k elements = ";

    for(int num : result){
        cout << num << " ";
    }

    return 0;
}