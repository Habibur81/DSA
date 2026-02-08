#include <iostream>
using namespace std;

int main(){
    // int num = 5;
    // cout << &num << endl;

    //same to int *p = 0;  p = &num;

    // int *ptr = &num;

    // cout << ptr << endl;
    // cout << *ptr << endl;

    //same to int *ptr = &num;
    // int *p = 0;
    // p = &num;

    // cout << p << endl;
    // cout << *p << endl;


    //copy of pointer
    // int *poin = ptr;

    // cout << poin << endl;
    // cout << *poin << endl;

    int i = 3;
    int *t = &i;
    cout << *t << endl;

    *t = *t + 1;
    cout << *t << endl;

    cout << t << endl;
    t = t + 1;
    cout << t << endl; 


    return 0;
}