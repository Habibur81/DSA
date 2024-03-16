#include <iostream>
using namespace std;

int main(){
    float f;
    cout<<"Enter Fahrenheit tempareture:";
    cin>>f;

    float celsius = 0;

    celsius = ((f-32)*5)/9;

    cout<<"Celsius tempareture is: "<<celsius;

    return 0;
}