#include<bits/stdc++.h>
using namespace std;

string reversStr(string str){
    if(str.length() <=1 ){
        return str;
    }
    return reversStr(str.substr(1)) + str[0];
}


int main(){
        
    string str = "Habib";
    
    cout << "Original string = " << str << endl;

    cout << "Reverse string = " << reversStr(str) << endl;

    return 0;
}