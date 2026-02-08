#include <iostream>
#include <cstring>
using namespace std;

class person {
    public:
        char *name;
        int age;
        float height;   

    person(){
        name = new char[100];
    }
        
    person(int age, float height){
        //this->name = name;
        this->age = age;
        this->height = height;
    }

    //copy constructor
    person(person& temp){
        char* ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "copy constructor " << endl;
        this->age = temp.age;
        this->height = temp.height;
    }

    void setName(char name[]){
        this->name = name;
    }

    // void getName(){
    //     cout << this->name << endl;
    // } 

    void print(){
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Height: " << this->height << endl;
    }

    ~person(){
        cout << "Distructor called" << endl;
    }
};

int main(){
    
    person p1(30, 5.9);
    char name[10] = "Habib";
    p1.setName(name);
    p1.print();
    cout << endl;
    //p1.name[0] = 'K';
    //p1.print();
    //p1.getName();


    // cout << endl;
    person p2;
    //person p2 = p1;
    //p2.print();

    // copy by assign operator
    p2 = p1;
    p1.print();
    cout << endl;
    p2.print();
    
    //cout << endl;
    //p1.name[0] = "g";
    // p1.print();
    //cout << endl;
    //p2.print();

    person *p = new person();
    // manually called distructor for dynamic object
    delete p;
    

    return 0;
}