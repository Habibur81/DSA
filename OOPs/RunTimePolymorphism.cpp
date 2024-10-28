#include <iostream>
using namespace std;
// this process is called run time polymorphism.
class Human{
    public:
        void IM(){
            cout << "I am from parent class" << endl;
        }
};

//parent and child class same but output different this process overriding.
class Child : public Human{
    public:
        void IM(){
            cout << "I am from child class" << endl;
        }
};

int main(){

    Child obj;
    obj.IM();

    return 0;
}