#include <iostream>
using namespace std;

class person{
    public:
        static int age;
        // static int func(){
        //     cout << "Static function " << endl;
        // }
};

int person::age = 28;

int main(){

    person obj;

    cout << obj.age << endl;
    obj.age = 20;
    cout << person::age << endl;
   // cout << person::func() << endl;


    return 0;
}