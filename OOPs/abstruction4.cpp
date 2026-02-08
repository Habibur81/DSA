#include <bits/stdc++.h>
using namespace std;
class Base{
    protected:
        int x;
    public:
        virtual void show() = 0;

        Base(int i){
            x = i;
        }

};

class Derived : public Base{
    int y;
    public:
        Derived(int i, int j): Base(i){
            y = j;
        }
        void show(){
            //cout << "x = " x << "y = " << y << endl;
        }
};

int main(){

    // Derived d;
    // d.show();

    return 0;
}