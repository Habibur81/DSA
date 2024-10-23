#include <bits/stdc++.h>
using namespace std;

int main(){

    int a = 2;
    int b = 10;
    int carry = 0;
    int sum = a + b + carry;
    carry = sum / 10;
    int remain = sum%10;

    cout << "carry=" << carry << " remain=" << remain <<  endl;

    return 0;
}