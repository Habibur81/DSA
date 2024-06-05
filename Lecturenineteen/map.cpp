#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int, string>m;

    m[1] = "Habib";
    m[2] = "Rahman";
    m[3] = "Faruk";

    for(int i = 1; i <= m.size(); i++){
        cout << "Map [" << i << "]: " << m[i] << endl;
    }

    return 0;
}