#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;
    vector<int> v = {1, 5, 3, 7, 9, 20, 2};

    for(int num : v){
        max_heap.push(num);
        min_heap.push(num);
    }

    while(!max_heap.empty()){
        cout << max_heap.top() << " ";
        max_heap.pop();
    }
    cout << endl;

    while(!min_heap.empty()){
        cout << min_heap.top() << " ";
        min_heap.pop();
    }

    cout << endl;


    return 0;
}