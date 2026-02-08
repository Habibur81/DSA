#include<bits/stdc++.h>
using namespace std;
string StringReverse(string str){

    if(str.length() <= 1){
        return str;
    }

    return StringReverse(str.substr(1)) + str[0];
}


int main(){
        
    string myStr = "cat";
    
    cout <<"Original string " << myStr << endl;

    cout << "Reverse String " << StringReverse(myStr) << endl;
    
    return 0;
}