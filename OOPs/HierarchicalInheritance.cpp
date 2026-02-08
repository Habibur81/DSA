#include <iostream>
using namespace std;

class Human{
    public:
        string name;
        float age;
        string gender;

};

class Male : public Human{

};

class Female : public Human{

};

int main(){
    Male obj;
    Female obj2;
    //Male set value
    obj.name = "Habib";
    obj.age = 27.3;
    obj.gender = "Male";

    //Female set value
    obj2.name = "Habiba";
    obj2.age = 20;
    obj2.gender = "Female";

    cout << "Male Object Details" << endl;
    cout << "Name: " << obj.name << endl;
    cout << "Age: " << obj.age << endl;
    cout << "Gender: " << obj.gender << endl;

    cout << endl << "Female Object Details" << endl;
    cout << "Name: " << obj2.name << endl;
    cout << "Age: " << obj2.age << endl;
    cout << "Gender: " << obj2.gender << endl;



    return 0;
}