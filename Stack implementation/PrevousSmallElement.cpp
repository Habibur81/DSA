#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(vector<int>&arr, int n){
    vector<int>result(n);
    
    for(int i=n-1; i>=0; i--){
        bool found = false;
        for(int j=i-1; j>=0; j--){
            if(arr[i] > arr[j]){
                result[i] = arr[j];
                found = true;
                break;
            }
        }

        if(!found){
            result[i] = -1;
        }
    }

    return result;
}

int main(){
    vector<int>arr = {2,1,4,3};
    int n = arr.size();
    vector<int>ans;
    ans = nextSmaller(arr, n);

    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}