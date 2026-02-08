#include <iostream>
using namespace std;

int main(){
    // int first = 110;
    // int *p = &first;
    // int **q = &p;

    // int second = (**q)++ + 9;

    // cout << first << " "<< second << endl;

    int* ptr = 0;
    int a = 10;

    *ptr = a;
    cout << *ptr << endl;

    return 0;
}