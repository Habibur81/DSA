#include <iostream>
using namespace std;

void swapFunc(int& num1, int& num2){
    int tmp = num1;
    num1 = num2;
    num2 = tmp;    
}

int main(){

    int a = 10;
    int b = 20;
    cout << "before swap" << endl;
    cout << "a=" << a << " b=" << b << endl;
    swapFunc(a, b);
    cout << "after swap" << endl;
    cout << "a=" << a << " b=" << b << endl;

    return 0;
}