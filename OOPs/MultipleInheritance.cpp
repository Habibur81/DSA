#include <iostream>
using namespace std;

class Father{
    public:
        string name = "Late Siraz Uddin";
        float age = 55;
        string gender = "Male";

};

class  Mother{
    public:
        string name = "Mst. Banecha begum";
        float age = 48;
        string gender = "Female";
};

class child : public Father, public Mother{

};

int main(){
    child obj;
    cout << "Father name: " << obj.Father::name << endl;
    cout << "Father age: " << obj.Father::age << endl;
    cout << "Father gender: " << obj.Father::gender << endl;

    cout << endl << "Mother name: " << obj.Mother::name << endl;
    cout << "Mother age: " << obj.Mother::age << endl;
    cout << "Mother gender: " << obj.Mother::gender << endl;


    return 0;
}