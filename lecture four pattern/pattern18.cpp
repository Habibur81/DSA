#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    int temp = n;
    int i=1;

    while (i <= n)
    {
        int j=1;
        
        while (j<=i)
        {
            char ch = 'A'+j+temp-2;
            cout<<ch<<" ";
            j = j+1;
        }
        cout<<endl;
        temp = temp-1;
        i = i+1;
        
        
    }
    
}