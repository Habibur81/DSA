#include <iostream>
using namespace std;

class Vehicle{
    public:
        string brand = "Ford";
        void honk(){
            cout << "Tuut Tuut \n";
        }
};

class car:public Vehicle{
    public:
        string model = "zzzzzz";
};

int main(){
    car obj;
    obj.honk();
    cout << "Brand " << obj.brand << " Model " << obj.model << endl;

    return 0;
}