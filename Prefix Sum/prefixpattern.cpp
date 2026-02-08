#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {2, 4, 6, 8, 10}; //Example array
    int n = arr.size();

    // Step 1: Build prefix sum array
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // Step 2: Query sum between indices l and r
    int l = 2, r = 4; // Example: sum of arr[1] to arr[3]

    int rangeSum = prefix[r] - (l > 0 ? prefix[l - 1] : 0);

    for(int i = 0; i < n; i++){
        cout << prefix[i] << " ";
    }cout << endl;
    cout << "Range Sum " << rangeSum << endl;



    return 0;
}