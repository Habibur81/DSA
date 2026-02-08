#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
        string brand;
        int year;

        void drive(){
            cout << brand << " is driving. " << endl;
        }

        void establish(){
            cout << brand << " is established since " << year << "." << endl;
        }

};


int main(){
    Car obj1;
    obj1.brand = "Toyota";
    obj1.year = 1920;

    obj1.drive();
    obj1.establish();

    return 0;
}