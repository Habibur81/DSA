#include <iostream>
using namespace std;

int main(){

    //integer array 
   /* int arr[10] = {23, 34, 45,};
    cout << arr << endl;
    int *apointer = &arr[0];
    cout << apointer << endl;
    */

    //char array
   // char chararray[5] = "abcd";
   // cout << chararray << endl;
    //integer a first index er address asche but character ase nai.
    //cout integer and character jon different bhabe kaj kore.
    /*char *chPointer = &chararray[0];
    cout << chPointer << endl;

    char temp = 'z';
    char *tp = &temp;

    cout << tp << endl;
    */

    string city = "Dhaka";
    string &ref_city = city;
    string *ref_city = &city;

    cout << "Variable Value = " << city << endl;
  //  cout << "Variable Value = " << ref_city << endl;
    cout << "Variable Value = " << ref_city << endl;

    return 0;
}