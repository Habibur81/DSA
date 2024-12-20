#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> num1, vector<int> num2){
    stack<int> st;
    unordered_map<int, int> map;

    for(int i = num2.size() -1; i >= 0; i--){
        while(!st.empty() && st.top() <= num2[i]){
            st.pop();
        }
        if(!st.empty()){
            map[num2[i]] = st.top();
        }else{
            map[num2[i]] = -1;
        }
        st.push(num2[i]);
    }

    vector<int> ans;
    for(int num : num1){
        ans.push_back(map[num]);
    }

    return ans;

}

int main(){

    vector<int> num1 = {4, 1, 2};
    vector<int> num2 = {1,3,4,2};

    vector<int> ans = nextGreaterElement(num1, num2);

    for(int a : ans){
        cout << a << " " ;
    }



    return 0;

}