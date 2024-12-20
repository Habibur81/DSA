#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    int size = 30000;
    vector<int>nums;
    int i = 0;

    MinStack() {
       nums.resize(size);
    }
    
    void push(int val) {
        if(i < size){
            nums[i] = val;
            i++;
        }
    }
    
    void pop() {
        if(i > 0){
            i--;
        }
    }
    
    int top() {
        int ans;
        if(i > 0){
            ans = nums[i - 1];
        }

        return ans;
    }
    
    int getMin() {
        int minVal = INT_MAX;
        for(int j=0; j < i; j++){
            if(nums[j] < minVal){
                minVal = nums[j];
            }
        }

        return minVal;        
    }
};

int main(){
    MinStack* obj = new MinStack();

    return 0;
}