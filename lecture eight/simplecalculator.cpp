#include <iostream>
using namespace std;

int main(){
    int a, b;
    char ch;

    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<"Enter a operator: ";
    cin>>ch;

    switch (ch)
    {
    case '+':
        cout<< "Addition = " << a + b <<endl;
        break;
    case '*':
        cout<< "Multiplication = " << a * b <<endl;
        break;
    case '/':
        cout<< "Division = " << a / b <<endl;
        break;
    case '-':
        cout<< "Subtraction = " << a - b <<endl;
        break;
    case '%':
        cout<< "Modulus = " << a % b <<endl;
        break;
    default:
        cout<< "Please enter right operator!" <<endl;
        break;
    }










    return 0;
}