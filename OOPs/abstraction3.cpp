#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
        virtual void show() = 0;
};

class Derived : public Base{
};

int main(){
    Derived d;

    return 0;
}