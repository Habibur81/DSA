#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<string>animals;

    //push data in queue
    animals.push("Dog");
    cout << animals.empty() << endl;

    cout << animals.front() << endl;
    animals.pop(); 

    

    return 0;
}