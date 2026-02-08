#include <iostream>
using namespace std;

int power(int base, int exponent){

    if(exponent == 0){
        return 1;
    }else{
        return base * power(base, exponent - 1);
    }
}

int main(){

    int base, exponent;
    cout << "Please enter Base number ";
    cin >> base;
    cout << "Please enter exponent number ";
    cin >> exponent;

    int result = power(base, exponent);
    cout << "Power result is = " << result << endl;

    return 0;
}