#include <iostream>
using namespace std;

//Bad practice 
int& func(int a){
    int num = a;
    int& ans = num;
    return ans;
}

//Ban practice 
int* fun(int n){
    int* ptr = &n;
    return ptr;
}

void update(int n){
    n = n + 1;

}

void update2(int& n){
    n = n + 2;
}

int main()
{   
    
    int num;
    cout << "Please enter a number = ";
    cin >> num ;
    cout << "Before Update = " << num << endl;
    // variable parameter hole function je variable thake seta 
    // alada variable hoy but parameter er value update hoy na
    // karon function er variable new memory address hoye thake. 
    update(num);
    cout << "After Update = " << num << endl;

    update2(num);

    cout << "Reference = " << num << endl;

   cout << func(num) <<endl;

   cout << fun(num) << endl;

    return 0;
}