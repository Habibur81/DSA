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
     void getName(){ // class method
        cout << this->name << endl;
    }  


};

int main(){
    myClass obj;
    obj.getName();

    return 0;
}