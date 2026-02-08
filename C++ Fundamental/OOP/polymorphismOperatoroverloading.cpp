#include <bits/stdc++.h>
using namespace std;

class Complex{
    // compile time polymorphism
    public:
        int real, imag;

        Complex(int r, int i) : real(r), imag(i){}

        Complex operator + (const Complex& c){
            return Complex(real + c.real, imag + c.imag);
        }

        void display(){
            cout << real << "+" << imag << "i" << endl;
        }
};

int main(){
    Complex ob1(1,2);
    Complex ob2(3,4);

    Complex result = ob1 + ob1;

    cout << "Sum: ";
    result.display();


    return 0;
}