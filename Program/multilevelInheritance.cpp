#include <iostream>
using namespace std;

class Vehicle{
    public:
        string parent = "parent";
};

class car:public Vehicle{
    public:
        string child = "child";
};

class brand: public car{
    public:
        string grandchild = "grand child";

};

int main(){
    brand obj;
    cout << obj.parent << endl;
    cout << obj.child << endl;
    cout << obj.grandchild << endl;

    return 0;
}