#include <iostream>
using namespace std;

class person {

    private:
        float height;
    public:
        string name;
    private:
        int age;

    // constructor
    public:
        person(){
            cout << "constructor called" << endl;
        }
    // paremeter contructor 
        person(string name){
            cout << "this keyword represent current object " << this << endl;
            this->name = name;
        }

    // private:
    //     float height;
    // public:
    //     string name;
    // private:
    //     int age;

    // public:
    //     void setProperty(string n, int a, float h){
    //         name = n;
    //         age = a;
    //         height = h;
    //     }

        // void setAge(int a){
        //     age = a;
        // }

        // void setHeight(float hei){
        //     height = hei;
        // }

        // string getName(){
        //     return name;
        // }

        // int getAge(){
        //     return age;
        // }

        // float getHeight(){
        //     return height;
        // }

};

int main(){
    //static allocation memory object 
    person obj("Habib");
    cout << "Current Object Address = " << &obj << endl;

    //dynamically allocation memory object 
    //person *obj2 = new person;

    /*
    string name;
    cout << "Enter your name = ";
    cin >> name;
    int age;
    cout << "Enter your age = ";
    cin >> age;
    float height;
    cout << "Enter your height = ";
    cin >> height;

    //static memory allocation
    person p;

    p.setProperty(name, age, height);

    cout  << endl << "static memory allocation" << endl;
    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;
    cout << "Height: " << p.getHeight() << endl;

    cout <<endl << "dynamically memory allocation" << endl;
    //dynamically memory allocation
    person *obj = new person;

    obj -> setProperty(name, age, height);
    cout << "Name: " << obj -> getName() << endl;
    cout << "Age: " << obj -> getAge() << endl;
    cout << "Height: " << obj -> getHeight() << endl;
    */


    return 0;
}