#include <bits/stdc++.h>
using namespace std;

vector<int> NextGreaterEle(vector<int>& arr){

    vector<int> result(arr.size(), -1);
    
    stack<int> st;

    for(int i = 0; i < arr.size(); i++){
        while(!st.empty() && arr[st.top()] < arr[i]){
            result[st.top()] = arr[i];
            st.pop();
        }

        st.push(i);
    }

    return result;
}


int main(){
    vector<int> arr = {2, 1, 5, 3, 4};
    vector<int> result = NextGreaterEle(arr);

    for(int res : result){
        cout << res << " ";
    }


    return 0;
}