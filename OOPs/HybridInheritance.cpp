#include <iostream>
using namespace std;

class A{
    public:
        void ShowA(){
            cout << "I am Class A" << endl;
        }
};

class B : public A{
    public:
        void showB(){
            cout << "I am Class B" << endl;
        }

};

class C : public A{
    public:
        void showC(){
            cout << "I am Class C" << endl;
        }    
};

class D : public B, public C{
    public:
        void showD(){
            cout << "I am Class D" << endl;
        }    
};




int main(){
    D obj;
    
    //obj.showA(); //Ambiguity problem
    obj.showB();
    obj.showC();
    obj.showD();

    // how to solve ambiguity problem in hybrid inheritance.
    //solve this problem using virtual keyword


    return 0;
}