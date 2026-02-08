#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){

    string str = "I love bangladeshi";

    string tmp;

    for(int i=0; i<str.length(); i++){
        if(str[i] == ' '){
            tmp.push_back('@');
            tmp.push_back('4');
            tmp.push_back('0');
        }else{
            tmp.push_back(str[i]);
        }
    }

    cout << tmp << endl;

    return 0;
}