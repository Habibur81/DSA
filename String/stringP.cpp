#include<bits/stdc++.h>
using namespace std;

int main(){
    string  s = "anagram";
    unordered_map<char, int> s_map;
    
    for(int i=0; i<s.length(); i++){
        s_map[s[i]] += 1;
    }
}