#include<bits/stdc++.h>
using namespace std;

bool checkAnagram(string st1, string st2){

    int len1 = st1.length();
    int len2 = st2.length();

    if(len1 != len2) return false;

    unordered_map<char, int> my_map;

    for(char ch : st1){
        my_map[ch]++;
    }

    for(char ch : st2){
        my_map[ch]--;

        if(my_map[ch] < 0)
            return false;
    }

    for(auto it : my_map){
        if(it.second != 0)
            return false;
    }

    return true;

}


int main(){
    
    string st1 = "ab";
    string st2 = "ba";
    
    bool check =  checkAnagram(st1, st2);
    
    if(check){
        cout << "Anagram!" << endl;
    }else{
        cout << "Not Anagram!";
    }
        
   
    return 0;
}