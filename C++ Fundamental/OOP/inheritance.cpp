#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
        string brand;
        int year;

        void drive(){
            cout << brand << " is driving. " << endl;
        }
};

class Brand : public Car{
    public:
        string color;
        void carColor(){
            cout << brand << " color is " << color << "." << endl;
        }
};



int main(){
    Brand obj;
    obj.brand = "Audio";
    obj.color = "red";

    obj.drive();
    obj.carColor();

    return 0;
}