#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> qarr = {-8, 2, 3, -6, 8};
    vector<int> ans;
    int n = qarr.size();
    int k = 2;
    
    //Approach 1 brute force

    // for(int i = 0; i <= n - k; i++){
    //     bool tf = false;
    //     for(int j = i; j < k + i; j++){
    //         if(qarr[j] < 0){
    //             ans.push_back(qarr[j]);
    //             tf = true;
    //             break;
    //         }
    //     }

    //     if(!tf){
    //         ans.push_back(0);
    //     }
    // }

    // Approache 2

    deque<int> dq;

    for(int i = 0; i < k; i++){
        if(qarr[i] < 0){
            dq.push_back(i);   
        }
    }

    if(dq.size() > 0){
            ans.push_back(qarr[dq.front()]);
    }else{
        ans.push_back(0);
    }

    for(int i = k; i < n; i++){
        if( !dq.empty() && (i - dq.front() >= k) ){
            dq.pop_front();
        }

        if(qarr[i] < 0){
            dq.push_back(i);
        }

        if(dq.size() > 0){
            ans.push_back(qarr[dq.front()]);
        }else{
            ans.push_back(0);
        }
    }


    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }


    return 0;
}