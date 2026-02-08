#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "cbaebabacd", p = "abc";

    sort(p.begin(), p.end());

    int i = 0;

    int j = p.length();
    int len = j;

    vector<int> ans;

    while(j <= s.length()){

        string sstr = "";

        sstr = s.substr(i, len);

        sort(sstr.begin(), sstr.end());

        cout << sstr << endl;

        if(sstr == p){
            ans.push_back(i);
        }

        i++; j++;

    }
    
    return 0;
}