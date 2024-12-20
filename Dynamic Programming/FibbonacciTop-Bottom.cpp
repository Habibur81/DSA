#include<bits/stdc++.h>
using namespace std;

//memorization top-bottom problem solve.
vector<int> ans(100, -1);

int fibo(int n){

    if(n <= 1) return n;

    if(ans[n] != -1){
        return ans[n];
    }
    ans[n] = fibo(n - 1) + fibo(n - 2);

    return ans[n];
    
}

int main(){
    int n = 10;

    cout << fibo(n) << endl;

    return 0;
}