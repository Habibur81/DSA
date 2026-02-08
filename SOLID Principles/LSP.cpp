#include <bits/stdc++.h>
using namespace std;

class Bird{
    public:
        virtual void fly(){
            cout << "flying" << endl;
        }
};

class Sparrow : public Bird{
    public:
        void fly() override{
            cout << "Sparrow is fly";
        }

}; // Bird class can inheritance by Sparrow because Sparrow can fly it is LSP

class Penguin : public Bird{
    public:
        void fly() override{
            cout << "Logically error";
        }
};//Penguin can't fly so LSP violates

int main(){

    return 0;
}