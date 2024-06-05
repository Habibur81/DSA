#include <iostream>
using namespace std;

bool primeNumber(int n){

    for (int i = 2; i < n; i++)
    {
        if(n%i == 0){
            return 0;
        } 
    }

    return 1;
    
}

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = primeNumber(n);

    cout << result;

    return 0;
}