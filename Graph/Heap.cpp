#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Max Heap Declaration
    priority_queue<int>maxHeap;

    maxHeap.push(5);
    maxHeap.push(10);
    maxHeap.push(3);
    maxHeap.push(20);
    
    cout << "Size of Max Heap = " << maxHeap.size() << endl;
    cout << "Top element of Max Heap = " << maxHeap.top() << endl;     
    // Iteration
    while(!maxHeap.empty()){
       int num = maxHeap.top() ;
       cout << num << " "; // print element
        maxHeap.pop(); // pop element 
    }

    cout << endl;
    
    if(maxHeap.empty()){
        cout << "Max Heap is empty " <<endl;
    }

    cout << "\n\n Min Heap Implementation:\n";
    // Min Heap Declaration
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    minHeap.push(40);
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);
    
    cout << "Size of Max Heap = " << minHeap.size() << endl;
    cout << "Top element of Min Heap = " << minHeap.top() << endl;  
    // Iteration
    while(!minHeap.empty()){
        int num = minHeap.top();
        cout << num << " ";
        minHeap.pop();
    }

    cout << endl;

    if(minHeap.empty()){
        cout << "Max Heap is empty " <<endl;
    }
    
    return 0;
}