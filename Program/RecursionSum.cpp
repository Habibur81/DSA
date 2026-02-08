#include <iostream>
using namespace std;

int sum(int k){
    if(k > 0){
        return k + sum(k - 2);
    }else{
        return 0;
    }
}

int main(){

    cout << sum(10) << endl;


    return 0;
}