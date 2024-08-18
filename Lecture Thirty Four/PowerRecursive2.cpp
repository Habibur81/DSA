#include <iostream>
using namespace std;

int  power(int base, int expo){

    if(expo == 0){
        return 1;
    }
    if(expo == 1){
        return base;
    }

    int ans = power(base, expo/2);

    if(expo%2 == 0){
        return ans * ans;
    }else{
        return base * ans * ans;
    }
}

int main(){
    int base, expo;
    cout << "Please enter base number = ";
    cin >> base;
    cout << "Please enter exponent number = ";
    cin >> expo;

    cout << "Power result = " << power(base, expo) << endl;

    return 0;
}