#include <iostream>
using namespace std;
#define square(x) ((x) * (x))

int main(){
    double n;
    cout << "Please Enter value: ";
    cin >> n;
    double result = square(n);
    cout << n << " square is = " << result << endl;

    return 0;
}