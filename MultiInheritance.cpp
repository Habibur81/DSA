#include <iostream>
using namespace std;

class Father{
    public:
        Father() {cout << "Father" << endl;}
        //same method
        void name(){
            cout << "parent class name" << endl;
        }
};

class Mother{
    public:
        Mother() {cout << "Mother" << endl;}
        //same method
        void name(){
            cout << "Mother class name" << endl;
        }
};

class Child: public Father, public Mother{
    public:
        Child() {cout << "Child" << endl;}
};

int main(){
    Child obj;

    //don't call Father and Mother class same
    //obj.name();
    //Solve This problem
    obj.Father::name();
    obj.Mother::name();

    return 0;
}