#include<bits/stdc++.h>
using namespace std;

vector<int>prevFunc(vector<int>&arr, int n){
    vector<int>ans(n);
    stack<int>my_stk;

    my_stk.push(-1);

    for(int i=0; i<n; i++){
        int curr = arr[i];

        while(my_stk.top() != -1 && curr <= arr[my_stk.top()]){
            my_stk.pop();            
        }

        ans[i] = my_stk.top();
        my_stk.push(i);

    }

    return ans;
}

int main(){
    vector<int>arr = {2,1,5,6,2,3};
    int n = arr.size();
    vector<int>ans;

   ans =  prevFunc(arr, n);

   for(int i=0; i<ans.size(); i++){
    cout << ans[i] << " ";
   }
   cout << endl;

    return 0;
}