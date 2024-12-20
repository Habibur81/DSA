#include <iostream>
using namespace std;

class myClass
{
    public:
        string name;

    public:
        myClass(){
            cout << "Hello world!!!!!";
        }

        myClass(int num1, int num2){
            cout << num1 + num2 << endl;
        }

        myClass(string name){
            this->name = name;
        }
};

// myClass::myClass(string name)
// {
//     this->name = name;
// }


int main(){
    
    myClass ob;
    cout << endl;
    myClass obj(20, 10);

    string name = "Habib";

    myClass strobj(name);

    cout << strobj.name << endl;
    

    return 0;
}