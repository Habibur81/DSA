#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s = "habibur";

    
    int freq[26] = {0};

    for(char it : s){
        freq[it - 'a']++;
    }

    for(int i : freq){
        cout << i << " ";
    }
   return 0;
}