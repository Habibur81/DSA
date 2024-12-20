#include <bits/stdc++.h>
using namespace std;

bool pow3num(int n){

    if(n <= 0) return false;

    if(n == 1) return true;

    return (n % 3 == 0) && pow3num(n / 3);

}


int main(){

    int n = 30;

    cout << pow3num(n) << endl;

    return 0;
}