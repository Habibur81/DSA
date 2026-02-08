#include <iostream>
using namespace std;

int main(){

    string food = "Pizza";
    string* prt = &food;

    cout << "Pointer Address=" << prt << endl;
    cout << "Main Variable Address=" << &food << endl;

    cout << "Pointer value=" << *prt << endl;
    cout << "Main Variable value=" << food << endl;

    *prt = "bergur";

    cout << "Before " << endl << endl;

    cout << "Pointer Address=" << prt << endl;
    cout << "Main Variable Address=" << &food << endl;

    cout << "Pointer value=" << *prt << endl;
    cout << "Main Variable value=" << food << endl;


    return 0;
}