#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(vector<int>&arr, int n){
    vector<int>result;
    
    for(int i=0; i<n; i++){
        bool found = false;
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                result.push_back(arr[j]);
                found = true;
                break;
            }
        }
        if(!found){
            result.push_back(-1);
        }
    }

    return result;
}

int main(){
    vector<int>arr = {2,1,5,6,2,3};
    int n = arr.size();
    vector<int>ans;
    ans = nextSmaller(arr, n);

    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}