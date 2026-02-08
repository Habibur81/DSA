#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a numer check of prime or not: ";
    cin>>n;

    int i = 2;

    while (i < n)
    {
        if(n%i == 0){
            cout<<"Non Prime Number "<<i<<endl;
        }else{
            cout<<"Prime Number "<<i<<endl;
        }

        i = i + 1;
    }
    
    // 

    return 0;
}