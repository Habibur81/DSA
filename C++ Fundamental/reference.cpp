#include <bits/stdc++.h>
using namespace std;

void increment(int& num){ // num is called parameter
    num++;
}

int main(){
    // Definition: A reference is an alias for another variable. It must be initialized at declaration
    // and not cannot be null

    //syntax
    int a = 4;
    int& ref = a;
    //Usage
    //Simplifies Syntax
    //Used in function arguments and return values.

    increment(a); // a is called argument
    
    cout << "After called increment function:" << a << endl;

    return 0;
}