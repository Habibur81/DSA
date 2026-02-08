#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int num = n;
    int ans = 0;
    int p = 1;

    while (n != 0)
    {
        int bit = n % 2;
        ans = ans + (bit*p);
        n = n / 2;
        p = p * 10;

        // int bit = n & 1;
        // ans = ans + (bit*p);
        // n = n >> 1;
        
        // p = p * 10;
    }
    
    cout<<num<<" Binary number is "<<ans<<endl;

    return 0;
}