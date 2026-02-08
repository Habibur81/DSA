#include<iostream>
using namespace std;
#include <string>
#include <algorithm>
#include <cctype>

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool palindromeStr(char name[], int n){
    int s = 0;
    int e = n - 1;

    while(s <= e){
        if(toLowerCase(name[s]) != toLowerCase(name[e])){
            return 0;
        }else{
            s++;
            e--;
        }
    }

    return 1;
}

void ReverStri(char name[], int len){
    int st = 0;
    int end = len - 1;

    while(st < end){
        char tem = name[st];
       // cout << tem << endl;
        name[st] = name[end];
        name[end] = tem;
        st++;
        end--;
    }
}

int lenOfchar(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout << "Enter your name:"<<endl;
    cin >> name;

    int len = lenOfchar(name);

    ReverStri(name, len);

    cout << name << endl;

    cout << "Palindrom or Not "<<palindromeStr(name, len) << endl;


    return 0;
}