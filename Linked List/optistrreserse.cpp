#include<bits/stdc++.h>
using namespace std;

void revstr(string& str, int left, int right){
    if(left >= right){
        return;
    }

    swap(str[left], str[right]);

    revstr(str, left+1, right);
}

void rvstr(string &s, int l, int r){
    while(l < r){
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
    }
}

void rvstr(string &s, int l, int r){
    while(l < r){
        swap(s[l], s[r]);
        l++;
        r--;
    }
}

int main(){
    string str = "Habib";
   // revstr(str, 0, str.length() - 1);
    rvstr(str, 0, str.length()-1);
    cout << str << endl;
    return 0;
}