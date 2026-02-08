#include <iostream>
using namespace std;

int CountFunc(int n){
    if (n == 0){
        return 0;
    }

    // Head Recursive
    // cout << n << endl;
    // CountFunc(n - 1);

   // cout << endl;
    
    CountFunc(n - 1);
    cout << n << endl;
    
}     




int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;

    CountFunc(n);
}