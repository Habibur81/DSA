#include <bits/stdc++.h>
using namespace std;

class CustomStack {
public:
    int size;
    int i = 0;
    vector<int> nums;
    
    CustomStack(int maxSize) {
        size = maxSize;
        nums.resize(size);
    }
    
    void push(int x) {
        if(i < size){
            nums[i++] = x;
        }           
    }
    
    int pop() {
        if(i > 0){
            int ans = nums[--i];
        }else{
            return -1;
        }
        
    }
    
    void increment(int k, int val) {
        for (int j = 0; j < k && j < i; ++j) {
        nums[j] += val; 
    }
    }
};

int main(){
    CustomStack* stk = new CustomStack(3);
    stk->push(1);
    stk->push(2);
    stk->push(3);
    stk->increment(5, 100);
    stk->increment(2, 100);

    cout << stk->pop() << endl;
    cout << stk->pop() << endl;
    cout << stk->pop() << endl;

    stk->increment(2, 100);

    return 0;
}