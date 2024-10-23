#include <iostream>
using namespace std;

int fac(int val){
    if(val == 1){
        return 1;
    }else{
        return val * fac(val - 1);
    }
}

int main(){
    cout << "Factorial is " << fac(5) << endl;

    return 0;
}