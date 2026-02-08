// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {

    //Definition: A pointer is a variable that holds the memory address of another variable.
    
    int a = 10;
    int* ptr = &a;
    
    //common operation
    //&a address of a
    //ptr pointer to a
    //*ptr get value at the address
    // prt = &a Point ptr to variable a
    
    cout << "Value: " << *ptr << endl;
    cout << "Address: " << ptr << endl;
    

    return 0;
}