#include <bits/stdc++.h>
using namespace std;
void insertAtBottom( stack<int>& nums, int num){

    if(nums.empty() || ((num > nums.top()))){
        nums.push(num);
        return;
    }

    int x = nums.top();
    nums.pop();

    insertAtBottom(nums, num);

    nums.push(x);


}
void reverse( stack<int>& nums){
    if(nums.empty()){
        return;
    }

    int num = nums.top();
    nums.pop();

    reverse(nums);

    insertAtBottom(nums, num);   
    
}

int main(){
    stack<int>nums;
    nums.push(10);
    nums.push(-2);
    nums.push(30);
    nums.push(-4);
    nums.push(50);

    reverse(nums);

   cout << nums.top() << endl;
   nums.pop();

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