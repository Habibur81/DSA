#include<bits/stdc++.h>
using namespace std;

int kthTopElement(vector<int>& arr, int k){
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < arr.size(); i++){
        pq.push(arr[i]);
        if(pq.size() > k){
            pq.pop();
        }
    }

    return pq.top();
}

int main(){
    vector<int> v = {1, 5, 3, 7, 9, 20, 2};
    int k = 2;
    int ans  = kthTopElement(v, k);

    cout << ans << endl;

    return 0;
}