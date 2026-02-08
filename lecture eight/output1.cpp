#include <iostream>
using namespace std;

void output(int a){
    a = a / 2;
}

int main(){
    int a = 10;

    output(a);
    cout << a;

    return 0;
}