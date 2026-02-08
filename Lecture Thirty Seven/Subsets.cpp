#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int> nums, vector<int> current, int index){

    if(index == nums.size()){

        cout << "{";
            for(int i : current) cout << i;
        cout << "}"<<endl;

        return ;
    }

    //exclude
    generateSubsets(nums, current, index + 1);

    current.push_back(nums[index]);

    //include
    generateSubsets(nums, current, index + 1);

    current.pop_back();

    
}

int main(){

    vector<int> nums = {1, 2, 3};
    vector<int> current;
    generateSubsets(nums, current, 0);
    return 0;
}