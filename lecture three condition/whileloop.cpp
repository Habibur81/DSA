#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    int i=1;
    int sum=0;

    while (i <= n)
    {
        sum = sum+i;   
        i++; 
    }

    cout<<n<<" sum is "<<sum<<endl;
    
}