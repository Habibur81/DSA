#include <iostream>
using namespace std;

//parameter function
void myFunction(string name){
    cout << name << endl;
}

// default parameter . We can edit default parameter
void myFunction2(string name="Rahman"){
    cout << name << endl;
}


//main method 
int main(){

    myFunction("Habib");
    myFunction2();

    return 0;
}

