#include <iostream>
using namespace std;

int fibonacci(int n){
    int tem = 0;
    int n1 = 0;
    int n2 = 1;

    for(int i=0; i < n; i++){

        //cout << n1 << " ";
        tem = n1;
        n1 = n2;
        n2 = tem + n1;

    }

    return tem;
}

int main(){

    int n;
    cin >> n;

    int result = fibonacci(n);

    cout << result << endl;


    return 0;
}