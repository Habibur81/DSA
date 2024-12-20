#include <iostream>
using namespace std;

int myFunc(int num1, int num2){
    return num1 + num2;
}

double myFunc(double num1, double num2, double num3){
    return num1 + num2 + num3;
}

int main(){

    cout <<"integer number function " << myFunc(10, 20) << endl;

    cout << "float number function " << myFunc(10.2, 20.3, 30.5) << endl;

    return 0;
}