#include <iostream>
using namespace std;

int main(){

    int a = 20; // execute time 0.022s
    int b = 10; // execute time 0.033s

    int sum = a + b; // execute time 0.011s

    cout<<"Two Number Sum is "<<sum<<endl; // execute time 0.044s

    return 0;

    //every statement execute a constant time so time complexity is O(1);
}