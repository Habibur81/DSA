#include <iostream>
using namespace std;

int update(int n)
{
    n = 20;
    cout<<"Inside function value "<<endl;
    cout<<n<<endl;
    cout<<"Going to main function "<<endl;

}

int main()
{
    int n = 10;
    update(n);
    cout<<"Main function variable value "<<endl;
    cout<<n;
     //variable parameter a value er copy pathai. tai onno function 
    //diye update korle main function a update hoy na
    return 0;
}