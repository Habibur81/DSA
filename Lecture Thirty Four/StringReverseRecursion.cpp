#include <iostream>
using namespace std;

void reverseString(string& name, int s, int e){
    cout << name << endl;
    
    if(s > e){
        return;
    }

    swap(name[s], name[e]);
    s++;
    e--;

    reverseString(name, s, e);

}


int main(){
    string name = "Habib"; //bibah output
    reverseString(name, 0, name.length() - 1);
    cout << name << endl;

    return 0;
}