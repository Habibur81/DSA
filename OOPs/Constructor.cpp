#include <iostream>
using namespace std;

class myClass{
    //access modifier public private protected
    public:
        string name = "Habibur"; // class property
    private:
        int age = 27; // class property
    protected:
        int height = 5.9; // class property
    public:
     //default contructor.
        myClass(){ // class constructor
            cout << this->name << endl;
        }
    //Constructor is a method that class name and method name same
    // Constructor autometially called when is created object
        myClass(string name){
            this->name = name;
        }

        myClass(myClass& temp){
            temp.name = "Ismile";
            temp.height = 5.7;
            temp.age = 44;
        }

        void print(){ // class constructor
            cout << this->name << endl;
        }

        void printout(){ // class constructor
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
            cout << "Height: " << this->height << endl;
        }

        ~myClass(){
            cout << "Called distructor" << endl;
        }


};

int main(){
    myClass obj;

    myClass pcons("Mahabur");
    pcons.print();

    //copy object
    myClass cobj(pcons);
    pcons.printout();

    //dynamic object 
    myClass *dobj = new myClass;
    // dynamicall object object destructor remove manually
    delete dobj;
    //dobj->name = "Sakib";
    //dobj->print();

    return 0;
}