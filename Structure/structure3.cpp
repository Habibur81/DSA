#include <iostream>
using namespace std;

struct person{
    int age;
    string name;
};

int main(){
    person obj;

    obj.name = "Habib";
    obj.age = 27;

    cout << "Name=" << obj.name << " " << "Age=" << obj.age << endl;

    return 0;
}