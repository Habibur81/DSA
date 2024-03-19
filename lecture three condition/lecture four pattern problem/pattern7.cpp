#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int row = 1;
    

    while (row <= n)
    {
        int count = row;

        int col = 1;

        while (col <= row)
        {
            cout<<count<<" ";

           
            count = count+1;

            col = col+1;
        }

        cout<<endl;
        row = row+1;
        
    }


    return 0;
    
}