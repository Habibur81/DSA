#include<bits/stdc++.h>
using namespace std;

vector<int> LearghK(vector<int> nums, int k){
    vector<int> result;
    priority_queue<int, vector<int>, greater<int>> Minheap;

    for(int num : nums){
        Minheap.push(num);
        if(Minheap.size() > k){
            Minheap.pop();
        }
    }


    while(!Minheap.empty()){
        result.push_back(Minheap.top());
        Minheap.pop();
    }

    return result;
}

vector<int> smallK(vector<int> nums, int k){
    priority_queue<int> MaxHeap;

    for(int nums : nums){
        MaxHeap.push(nums);
        if(MaxHeap.size() > k)
            MaxHeap.pop();
    }

    vector<int> result;

    while(!MaxHeap.empty()){
        result.push_back(MaxHeap.top());
        MaxHeap.pop();
    }

    return result;
}


int main(){
        
    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;
    vector<int> result = LearghK(nums, k);
    cout << "Max K elements = ";
    for(int num : result){
        cout << num << " ";
    }


   
    cout << endl << "Min K elements = ";
    vector<int> minK = smallK(nums, k);

    sort(minK.begin(), minK.end());

    for(int num : minK){
        cout << num << " ";
    }

    return 0;
}