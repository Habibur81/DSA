#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "Hello World";
    int size = s.size();
    string ans;
    int j=0;

    for(int i=size-1; i>0; i--){
        if(s[i] != ' '){
           ans[j] = s[i];
           j++;
        }else{
            break;
        }
    }

    cout << ans <<endl;


    return 0;
}