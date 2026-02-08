#include <iostream>
using namespace std;

int main(){

    string str = "Dhaka";

    //create reference to the variable
    string& ref_str = str;

    //display the variable
    cout << "Variable value = " << str << endl;
    cout << "Reference value = " << ref_str << endl;

    ref_str = "New work";

    cout << endl << "After Modification: " << endl;
    cout << "Variable value = " << str << endl;
    cout << "Reference value = " << str << endl;

    // create a variable
    string city = "Paris";

    // valid but not a standard practice
    string &ref_city = city;

    // valid and a standard practice
    string& ref_city = city;

    return 0;
}