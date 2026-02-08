#include <iostream>
using namespace std;

void print(int *p){
    cout << *p << endl;
}

int updateFun(int *p){
    *p = *p + 10;

    return *p;
}

void update(int *p){
    p = p + 1;
    cout << "Inside Address of number = " << p << endl;
}

int main(){
    int num = 10;
    int *p = &num;

    cout << "Before Address of number = " << p << endl;
    update(p) ;

    cout << "Print by function ";
    print(p);

    cout <<"Update by function " << updateFun(p) << endl;

    return 0;
}