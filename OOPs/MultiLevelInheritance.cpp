#include <iostream>
using namespace std;

class GrandFather{
    public:
        void GName(){
            cout << "Grand Father Name: " << "Arob Ali" << endl;
        }
};

class Child : public GrandFather{
    public:
        void CName(){
            cout << "Father Name: " << "Siraz Uddin" << endl;
        }
};

class GrandChild : public Child{
    public:
        void GCName(){
            cout << "Grand Child Name: " << "Habib" << endl;
        }
};

int main(){

    GrandChild obj;  
      
    obj.GName();
    obj.CName();
    obj.GCName();

    return 0;
}