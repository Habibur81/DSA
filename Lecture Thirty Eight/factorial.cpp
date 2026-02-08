#include <iostream>
using namespace std;

int factorial(int n){

    if(n == 0)
        return 1;
    if(n == 1)
        return 1;
   
    return n * factorial(n - 1);


    
}

int main(){

    int n = 5;
    // cout << "Enter a valid number for factorial = ";
    // cin >> n;
    int ans = 0;


    cout << factorial(n) << endl;

    //cout << "Answer is = " << ans << endl;

    return 0;
}