#include <iostream>
using namespace std;

class myClass{
    public:
        int a, b;
        // void operator() (){
        //     cout << "Operator overloading" << endl;
        // }

        
        void operator+ (myClass& obj){
            // int val1 = obj->a;
            // int val2 = obj.a;
            // cout << val1 - val2 << endl;
            cout << "+ operator overloading" << endl;
        }
};

int main(){
    myClass obj1, obj2;
    obj1.a = 20;
    obj2.b = 10;

    obj1 + obj2;


    return 0;
}