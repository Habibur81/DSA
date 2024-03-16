#include <iostream>
using namespace std;

int main()
{
    int n, i=1;
    cout<<"Enter a number:";
    cin>>n;

    int sum = 0;

    while (i <= n)
    {
        if(i%2 == 0){
            sum = sum+i;
        }
        
        i = i+1;
       
    }

    cout<<n<<" even number sum is "<<sum<<endl;

    return 0;
    
}