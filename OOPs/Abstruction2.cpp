#include <bits/stdc++.h>
using namespace std;

class AbsClass{
    protected:
        int num;
    public:
        void set(){
            cout << "please enter value = ";
            cin >> num;
        }
        virtual void squre() = 0;
};

class squareClass : public AbsClass{
    public:
        void squre(){
           cout << num << " square = " << num * num;
        }
};

int main(){
    squareClass sqr;
    sqr.set();

    sqr.squre();


    return 0;
}