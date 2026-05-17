#include <bits/stdc++.h>
using namespace std;

void findTopK(vector<int>& nums, int k){
    priority_queue<int>pq(nums.begin(), nums.end());

    cout << "Top " << k << " elements: ";

    for(int i = 0; i < k; i++){
        cout << pq.top() << " ";
        pq.pop();
    }
}



int main(){
    vector<int> data = {3, 10, 5, 82, 1, 45, 2, 7};
    int k = 3;
    findTopK(data, k);
    return 0;
}