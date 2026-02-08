#include <bits/stdc++.h>
using namespace std;

class print{
    public:
    //compile-time overloading; called is function overloading.
        void show(int x){
            cout << "Integer " << x << endl;
        }

        void show(string x){
            cout << "String " << x << endl;
        }

        void sum(int x1, int x2){
            cout << "Two Parameter Sum = " << x1 + x2 << endl;
        }

        void sum(int x1, int x2, int x3){
            cout << "Three Parameter Sum = " << x1 + x2 + x3 << endl;
        }
};

int main(){
    print p;
    p.show(10);
    p.show("Habib");

    p.sum(10, 20);
    p.sum(10, 20, 30);

    return 0;
}