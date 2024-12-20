#include<bits/stdc++.h>
using namespace std;



int main(){
    int pow;
    int num;
    cout << "Enter a number ";
    cin >> num ;
    cout << "Enter power ";
    cin >> pow;
    int result = 1;
    for(int i = 0; i < pow; i++ ){
        result *= num;
    }

    cout << result << endl;

    return 0;
}