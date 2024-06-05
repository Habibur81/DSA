#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a negative number: ";
    
    cin>>n;

    if(n > 0){
        cout<<"Please enter negative number";
    }else{
         n *= -1;
         int binaryNumber = 0;
        int power = 1;

        while (n > 0)
        {
            int bit = n % 2;

            binaryNumber += bit*power;
            power *= 10;
            n = n / 2;
        }

      cout<< ~binaryNumber + 1 <<endl;
       // cout<<newAns<<endl;
    }

    
    

    return 0;
}