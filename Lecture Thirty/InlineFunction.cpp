#include <iostream>
using namespace std;

inline int getMax(int& a, int& b){
    return (a > b) ? a : b;
}

int main(){
    int a = 2, b = 3;
    int ans = 0;

    ans = getMax(a, b);
    cout << "Before = " << ans << endl;

    a = ans + 5;
    b = ans + 1;

    ans = getMax(a, b);
    cout << "After = " << ans << endl;
    return 0;
}