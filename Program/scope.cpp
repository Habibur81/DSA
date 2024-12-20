#include <iostream>
using namespace std;
//golbal variable
int x = 10;

int myFunc(){
    // local variable
    int y = 20;
    cout << "local  " << y << endl;
    x = 5;
}

int main(){
    cout << "Gobal " << x + 20 << endl;
    myFunc();
    cout << "Gobal " << x + 20 << endl;

    return 0;
}