#include <iostream>
using namespace std;

//Hierarchical Inheritance
class Aminal{
    public:
        void info(){cout << "I am an animal" << endl;}
};

class Dog: public Aminal{
    public:
        void Dogsound(){cout << "I am a Dog, My sound goow" << endl;};
};

class Cat: public Aminal{
    public:
        void Catsound() {cout << "I am a Cat, My sound mouw"; }
};

int main(){
    Dog dobj;
    Cat cobj;

    dobj.info();
    dobj.Dogsound();

    cout << endl;

    cobj.info();
    cobj.Catsound();
    


    return 0;
}