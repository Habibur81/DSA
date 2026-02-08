#include <iostream>
using namespace std;

int main(){
    int i = 10;
    //j is a reference variable of i
    int& j = i;
    cout << j << endl;
    j++;
    cout << "i value is increment by reference variable j " << i << endl;

    int num = 20;
    cout << num << endl;

    
    return 0;
}