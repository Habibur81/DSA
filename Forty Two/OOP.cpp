#include <iostream>
using namespace std;

class person{

   

    public:
        string name;
        int age;

     person() {
        cout << "I am constructor class function" << endl;
    }

    person(int age){
        cout << " this - " << this << endl; 
        this->age = age;
    }


    void setFunc(string n, int a){
        name = n;
        age = a;
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    // int setFunc(){
    //     retu
    // }



};


int main(){

    person obj(20);
    //cout << "Address of object - " << &obj << endl;
    cout << "Main object value " << obj.getAge() << endl;

    person obj3(obj);

    cout << "Copy object value " << obj3.getAge() << endl;



    person *obj2 = new person;

    // //static memory allowcation
    // person p;
    // p.setFunc("Habib", 28);
    // cout << "Name=" << p.getName() << " " << "Age=" << p.getAge() << endl;

    // cout << endl;

    // //dynamically memory allocatiion
    // person *po = new person;

    // po->setFunc("Habib", 32);
    // cout << "Name=" << po->getName() << " " << "Age=" << po->getAge() << endl;

    return 0;
}