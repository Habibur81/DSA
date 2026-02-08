#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string, int> mp;

    mp["Habib"] = 20;
    mp["Tasnim"] = 40;
    mp["Tamanna"] = 80;

    for(auto it : mp){
        
        cout << it.first  << " " << it.second << endl;
    }

    map<int, int>mp2;
    int num = 10;
    for(int i = 0; i < 10; i++){
        mp2[i] = num;

        num = num + 10;
    }

    for(auto it : mp2){
        cout << "Map key = " << it.first + 1 << " Map value = " << it.second << endl; 
    }

    return 0;
}