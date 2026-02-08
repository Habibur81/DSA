#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i = 1;

    while (i <= n)
    {
        
        int star = n - (i - 1);

        while(star)
        {
            cout<<"*"<<" ";
            star--;
        }

        int space = i -1;

        while(space){
            cout<<" ";
            space--;
        }

        cout<<endl;

        i = i + 1;
        
    }

    return 0;
}