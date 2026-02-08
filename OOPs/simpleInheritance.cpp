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

int main(){
    Male obj;
    //Male set value
    obj.name = "Habib";
    obj.age = 27.3;
    obj.gender = "Male";

    cout << "Male Object Details" << endl;
    cout << "Name: " << obj.name << endl;
    cout << "Age: " << obj.age << endl;
    cout << "Gender: " << obj.gender << endl;



    return 0;
}