#include <iostream>
using namespace std;

int foo(int n){
    if(n <= 1) return;

    foo(n -1 ); 
}

int main(){

    cout << foo(5) << endl;

    return 0;
}