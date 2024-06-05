#include <iostream>
#include <array>
using namespace std;

int main(){
    array <int, 4> a = {2,3,4,5};
    int n = a.size();

    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }

    cout << a.at(1) << endl;
    cout << a.empty() <<endl;

    cout << a.front() << endl;
    cout << a.back() << endl;

    return 0;
}