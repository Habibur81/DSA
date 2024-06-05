#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    // int a = 4;
    // int b = 6;

    // cout<<"a & b = "<<(a & b )<<endl;
    // cout<<"a | b = "<<(a | b )<<endl;
    // cout<<"a ^ b = "<<(a ^ b )<<endl;
    // cout<<"~a = "<<(~a)<<endl;

    // cout<<(17 >> 1)<<endl;
    // cout<<(17 >> 2)<<endl;
    // cout<<(17 << 1)<<endl;
    // cout<<(17 << 2)<<endl;
    // cout<<(21 << 2)<<endl;

    int n = 7;

    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * pow(10, i) + ans);

        cout<<bit<<endl;

        n = n >> 1;

        i = i + 1;
    }
    
    

    return 0;
}