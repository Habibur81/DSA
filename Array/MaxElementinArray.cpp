#include<bits/stdc++.h>
using namespace std;

int MaxElementArr(vector<int>& nums){
    //time complexity O(n) // Because ekhane 1 loop used hoyeche
    //Space complexity O(n) // Because ekhane map used hoyeche

    unordered_map<int, int> my_map;
    int MajorEle = 0, Coun = 0;
    MajorEle = nums[0];

    for(int num : nums){
        my_map[num]++;
        if(my_map[num] > Coun){
            Coun = my_map[num];
            MajorEle = num;
        }
    }
    return MajorEle;
}

//Boyer-Moore Voting Algorithm

int MaxEleArr(vector<int>& nums){
    int candidate = 0, count = 0;
    
    for(int num : nums){
        if(count == 0){
            candidate = num;
        }

        count += (num == candidate) ? 1 : -1;
    }

    return candidate;
}

int main(){

    vector<int>nums;
    nums = {2,2,1,1,1,2,2};
    cout << "Boyer-Moore Voting Algorithm Array Max element = " << MaxEleArr(nums) << endl;

}