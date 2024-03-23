#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;

    while(i <= n){

        int j = n-i+1;
        int count = 1;
        while (j)
        {
            cout<<count;
            count++;
            j--;
        }

        int str1 = i - 1;
        while (str1)
        {
            cout<<"*";
            str1--;
        }

        int str2 = i - 1;
        while (str2)
        {
            cout<<"*";
            str2--;
        }
        
        int j2 = n-i+1;
        while (j2)
        {
            cout<<j2;
            j2--;
        }

        
        
        
        cout<<endl;

        i = i+1;
        
    }

    
    return 0;
}