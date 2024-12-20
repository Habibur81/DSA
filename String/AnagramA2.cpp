#include<bits/stdc++.h>
using namespace std;

int main(){
    string p = "abc";
    int plen = p.length();
    string s = "cbaebabacd";
    int slen = s.length();
    vector<int> pCount(26, 0);
    vector<int> sCount(26, 0);
    vector<int> result;

    for(char ch : p){
        pCount[ch - 'a']++;
    }

    for(int i = 0; i < plen; i++){
        sCount[s[i] - 'a']++;
    }

    if(pCount == sCount){
        result.push_back(0);
    }

    for(int i = plen; i < slen; i++){

        sCount[s[i] - 'a']++;

        sCount[s[i - plen] - 'a']--;

        if(pCount == sCount){
            result.push_back(i - plen + 1);
        }
        
    }

    
    return 0;
}