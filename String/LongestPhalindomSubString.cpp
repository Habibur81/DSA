#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abbc";
    // string ans = "";
    // int slen = s.length();
    // int ls, rs;
    string str = s.substr(1, 2);
    cout << str << endl;

    // if(slen == 0){
    //     cout << "" << endl;
    // }else if(slen == 2){
    //     cout <<  ans << endl;
    // }else if(slen == 1){
    //     cout << s << endl;
    // } 

    // if(slen%2 != 0){
    //     int mid = slen/2;
    //     ls = mid - 1;
    //     rs = mid + 1;
    // }else{
    //     int mid = slen/2;
    //     ls = mid - 1;
    //     rs = mid;
    // }

    // while(ls >= 0 && rs < slen){
    //     if(s[ls] == s[rs]){
    //         ls--;
    //         rs++;
    //     }else{
    //         break;
    //     }
    // }

    // ans = s.substr(ls+1, rs - ls - 1);
    // cout << ans << endl;

    return 0;
}