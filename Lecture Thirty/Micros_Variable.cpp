#include <iostream>
using namespace std;

//Create Macros variable PI
// Macros variable value 3.14159
#define PI 3.14159

int main(){
    double radius, area;
    cout << "Please enter radius value: ";
    cin >> radius;

    // use PI to calculate area of a circle
    area = PI * radius * radius;
    cout << "Area of circle = " << area << endl;


    return 0;
}