#include <iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;

    s = {8, 1, 4, 2, 5, 3, 7,7,6};

    for(int value : s){
        cout << value << " ";
    }

    return 0;
}