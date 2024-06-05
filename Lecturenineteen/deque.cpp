#include <iostream>
#include <deque>
using namespace std;

int main(){

    //create deque
    deque<int> dq;
    dq = {2, 4, 8, 10, 20};

    for(int i : dq){
        cout << i << endl;
    }

    deque<int> nums = {2, 3};

    cout << "Initial Deque: ";
    for (const int& num : nums) {
        cout << num << ", ";
    }
    
    // add integer 4 at the back
    nums.push_back(4);
    
    nums.push_back(9);
    // add integer 1 at the front
    nums.push_front(1);
    
    cout << "\nFinal Deque: ";
    for (const int& num : nums) {
        cout << num << ", ";
    }
    cout << endl;
    cout << "Font element: " << nums.front() << endl;
    cout << "Back element: " << nums.back() << endl;
    cout << "Element at index 1: " << nums.at(1) << endl;
    cout << "Element at index 0: " << nums[0] << endl;

    // change elements at the index
    nums.at(1) = 5;
    nums.at(3) = 8;
    nums.at(4) = 10;

    for(int num : nums){
        cout << num << " ";
    }
    cout << endl;

    nums.pop_back();

    for(int num : nums){
        cout << num << " ";
    }cout << endl;

    nums.pop_front();

    for(int num : nums){
        cout << num << " ";
    }

    return 0;
}