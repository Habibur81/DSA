#include <iostream>
using namespace std;

int Fibonnaci(int num1){

    if(num1 == 0)
        return 0;
    if (num1 == 1)
        return 1;
        
    int ans = Fibonnaci(num1 - 1) + Fibonnaci(num1 - 2);

    return ans;
}

int main(){

    int num1;
    cout << "Please enter fibonacci path num = ";
    cin >> num1;

    cout << Fibonnaci(num1) << endl;

    return 0;
}