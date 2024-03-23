#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;

    int i=1;

    while (i <= n)
    {
        int space = n-i;
        while (space)
        {
           cout<<" ";
           space = space-1;
        }

        int star = i;
        while (star)
        {
            cout<<"*";
            star--;
        }
        cout<<endl; 
        i = i+1;  
        
    }
    return 0;
}