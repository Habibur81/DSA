#include <iostream>
using namespace std;

int func(int n){
    if(n == 0)
        return 1;

    int result = n * func(n - 1);   

    return result;

}

int main(){

    int n;
    cout << "Please enter a number for factorial = ";
    cin>>n;

    int ans = func(n);
    cout << "Factorial = " << ans << endl;

    return 0;
}