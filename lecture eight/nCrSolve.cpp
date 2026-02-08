#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}

int nCrCalculation(int n, int r){
    int nfact = factorial(n);
    int rfact = factorial(r) * factorial(n-r);
    int answer = nfact/rfact;
    return answer;
}

int main(){

    int n, r;
    cout<<"Enter n and r values: ";
    cin>>n>>r;
    int result = nCrCalculation(n, r);

    cout<<"nCr Result = "<< result << endl;

    return 0;
}