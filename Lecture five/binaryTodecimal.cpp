#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;

    int dNum = 0;
    int p = 1;

    while (n > 0)
    {
        int bit = n % 10;
        dNum += bit * p;
        cout<< p;
        p *= 2;
        n = n / 10;
    }
    
    //cout<<dNum<<endl;


    return 0;
}