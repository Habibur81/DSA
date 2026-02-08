#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums(10);
    nums[0] = 10;
    nums.push_back(10); // add to end
    nums.emplace_back(20); // more efficient for object
    
    // accessing element 
    cout << nums[0] << endl; // No bounds check
    cout << nums.at(1) << endl; // bounds check
    
    // size information
    cout << "Vector size " << nums.size() << endl;
    cout << "Vector capacity " << nums.capacity() << endl;
    
    //iteration
    for(int num : nums){
        cout << num << " " ;
    }
    
    nums.insert(nums.begin()+1, 15); // insert at 1 position 
    
    cout << endl;
    
    for(int num : nums){
        cout << num << " " ;
    }
    
    nums.pop_back(); // remove last element
    nums.erase(nums.begin()); // remove first element
    
    cout << endl;
    
    for(int num : nums){
        cout << num << " " ;
    }
    
    nums.clear();
    
    cout << endl;
    
    if(nums.size() == 0){
        cout << "Vector is no element, Clear function remove all element from vector" << endl;
    }
    

    return 0;
}