#include<bits/stdc++.h>
using namespace std;

bool solveFun(string s, string t){
    int i=0, j=0;
    while(i<s.length() && j<t.length()){
        if(s[i] == t[j])
            i++;
        j++;
    }  

    return i == s.length(); 
}

int main(){

    string s = "abc";
    string t = "andctyb";

    cout << solveFun(s, t) << endl;

    return 0;
}