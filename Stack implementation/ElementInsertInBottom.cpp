#include <bits/stdc++.h>
using namespace std;
void solve(stack<int>& nums, int x){

    if(nums.empty()){
        nums.push(x);
        return;
    }

    int num = nums.top();
    nums.pop();

    solve(nums, x);
    nums.push(num);
}

int main(){
    stack<int> nums;
    nums.push(10);
    nums.push(20);
    nums.push(30);
    nums.push(40);
    nums.push(50);

    int x = 90;
    solve(nums, x);
    int size = nums.size();

    for(int i = 0; i < size; i++){
        cout << nums.top() << endl;
        nums.pop();
    }

    return 0;
}