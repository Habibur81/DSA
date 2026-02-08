#include <bits/stdc++.h>
using namespace std;
void solveFun(stack<int> &nums, int count, int size){

    if(count == size/2){
        nums.pop();
        return;
    }

    int num = nums.top();
    nums.pop();

    solveFun(nums, count+1, size);

    nums.push(num);
}


int main(){
    stack<int>nums;
    nums.push(1);
    nums.push(2);
    nums.push(3);
    nums.push(4);
    nums.push(5);

    int size = nums.size();
    int count = 0;

    solveFun(nums, count, size);

    cout << nums.top() << endl;
    nums.pop();

    cout << nums.top() << endl;
    nums.pop();

    cout << nums.top() << endl;
    nums.pop();

    cout << nums.top() << endl;
    nums.pop();


    return 0;
}