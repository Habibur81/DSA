#include <iostream>
using namespace std;

int main(){
    float c;
    cout<<"Enter celcius tempareture:";
    cin>>c;

    float fahrenhait = 0;

    fahrenhait = (c*9)/5 + 32;

    cout<<"Celsius tempareture is: "<<fahrenhait;

    return 0;
}