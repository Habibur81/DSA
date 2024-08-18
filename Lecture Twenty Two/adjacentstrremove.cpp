#include<iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string removeDuplicates(string s){
    string ans;

    for(auto ch:s){

        if(ch == ans.back()){
            ans.pop_back();
        }else{
            ans.push_back(ch);
        }
    }

    return ans;
}

int main(){

    string st1="abbaca";

    cout << removeDuplicates(st1) <<endl ;

    return 0;
}