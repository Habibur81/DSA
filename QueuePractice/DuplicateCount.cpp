#include<bits/stdc++.h>
using namespace std;

bool duplicateCheck(vector<int>&set){
    unordered_set<int>mySet;
    for(int s : set){
        if(mySet.count(s)) return true;
        mySet.insert(s);
    }

    return false;
}


int main(){
    vector<int>s = {30, 10, 40, 10, 90}; 
    
    cout << duplicateCheck(s) << endl;

    return 0;
}