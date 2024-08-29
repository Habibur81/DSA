#include <iostream>
using namespace std;

struct {
    int age;
    string name;
} obj1, obj2;

int main(){
    obj1.age = 10;
    obj1.name = "Rabbi";

    obj2.age = 20;
    obj2.name = "Mahabur";

    cout << "Obj1 name = " << obj1.name << endl;
    cout << "Obj1 age = " << obj1.age << endl;
    cout << endl << endl;
    cout << "Obj2 name = " << obj2.name << endl;
    cout << "Obj2 age = " << obj2.age << endl;


    return 0;
}