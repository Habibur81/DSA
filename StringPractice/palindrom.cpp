#include<bits/stdc++.h>
using namespace std;

bool palindromeCheck(string st){
    int left = 0;
    int right = st.length() - 1;

    while(left < right){
        if(st[left] == st[right]){
            left++;
            right--;
        }else{
            return false;
        }
    }

    return true;
}


int main(){
    
    string st = "abba";

    bool pal = palindromeCheck(st);

    if(pal){
        cout << "Palindrome!" << endl;
    }else{
        cout << "Not Palindrome!" << endl;
    }

    return 0;
}