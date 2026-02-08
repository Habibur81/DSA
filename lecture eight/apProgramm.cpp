#include <iostream>
using namespace std;

int ap(int n){

    int result = 0;

    result = (3*n) + 7;

    return result;

}

int main()
{
    int n;
    cout << "Enter an number: ";
    cin >> n;

    int result = ap(n);

    cout << "AP is: " << result;

    return 0;
}