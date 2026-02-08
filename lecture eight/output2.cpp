#include <iostream>
using namespace std;

int output(int a){
    int ans = a * a;

    return ans;
}

int main(){
    int a = 14;

    a = output(a);
    cout << a;

    return 0;
}