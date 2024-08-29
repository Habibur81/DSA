#include <iostream>
using namespace std;

struct {
    int age;
    string name;
} myStructure;


int main(){
    myStructure.name = "Habib";
    myStructure.age = 20;

    cout << "Name = " << myStructure.name << endl;
    cout << "Age = " << myStructure.age << endl;

    return 0;
}



