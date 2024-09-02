#include <iostream>
using namespace std;

enum Habib{
    hight = 6,
    weight = 40
};

int main(){

    enum Habib evariable = weight;
    //cout << evariable << endl;

    switch (evariable)
    {
        case 40:
            cout << "Your are weight is = " << evariable << endl;
            break;
        case 50:
            cout << "Your are weight is = " << evariable << endl;
            break;
        
        default:
            cout << "Enter your weight " << endl;
            break;
    }



    return 0;
}