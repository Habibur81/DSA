#include <bits/stdc++.h>
using namespace std;

int main(){

    string a = "110010";
    string b = "10111";
    string result = "";

    int len1 = a.size();
    int len2 = b.size();
    int num1;
    int num2;
    int carry = 0;
    int res = 0;


    while(len1 > 0 && len2 > 0){
        num1 = a[len1-1] - '0';
        num2 = b[len2-1] - '0';
        res = (num1 + num2 + carry) % 2;
        res = res + '0';
        carry = (num1 + num2+carry) / 2;
        result.push_back(res);
        len1--;
        len2--;
    }

    while(len1 > 0){
        num1 = a[len1-1] - '0';
        res = (num1 + carry) % 2;
        res = res + '0';
        carry = (num1 + carry) / 2;
        result.push_back(res);
        len1--;
    }

    while(len2 > 0){
        num2 = b[len2-1] - '0';
        res = (num2 + carry) % 2;
        res = res + '0';
        carry = (num2 + carry) / 2;
        result.push_back(res);
        len2--;
    }

    if(carry == 1){
        carry = carry + '0';
        result.push_back(carry);
    }

    reverse(result.begin(), result.end());
   
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }


    return 0;
}