#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

        int len = nums.size();
        int k = 0;

        for(int i = 0; i < len; i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }

        cout << k << endl;

    return 0;
}