#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;

    while(i <= n){

        int space = n-i;

        while (space)
        {
            cout<<" ";
            space = space-1;
        }

        int count =  i;     

        while (count)
        {
           cout<<"*";
           count--;
        }
        int third = i-1;
        
        while(third){
            cout<<"*";
            third--;
        }

        cout<<endl;

        i = i+1;
        
    }

    
    return 0;
}