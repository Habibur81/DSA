#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int row = 1;
    

    while (row <= n)
    {
        

        int col = row;

        while (col > 0)
        {
            cout<<col<<" ";
            col = col-1;
        }

        cout<<endl;
        row = row+1;
        
    }


    return 0;
}