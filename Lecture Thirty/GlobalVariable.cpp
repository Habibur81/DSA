#include <iostream>
using namespace std;
int global_variable = 3;

void func1(){
    cout << "Global Variable from function = " << global_variable << endl;
}

int main(){
    cout << "Global Variable = " << global_variable << endl;
    func1();


    return 0;
}