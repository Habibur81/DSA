#include <iostream>
using namespace std;

void update(int **p2){
    //Can be changed - 
    //p2 = p2+1;
    //cout << p2 << endl;

    //Can be changed - 
    //*p2 = *p2;
    //cout << "Can Change this = " << *p2 << endl;

    //Can be changed - 
    **p2 = **p2 + 1;
    cout << "Can Change this = " << **p2 << endl;

}

int main(){
    int i = 8;
    int* p = &i;
    
    //cout << &i << endl;
    //cout << p << endl;

   // cout << i << endl;
   // cout << *p << endl;

    //cout << endl;
    int** p2 = &p;

    /*cout << "Variable Address = " << &i << endl;
    cout << "1st Pointer carry to Variable Address = " << p << endl;
    cout << "2nd Pointer carry to Variable Address = " << *p2 << endl;
    cout << endl << "1st Pointer Address = " << &p << endl;
    cout << "2nd Pointer carry to 1st pointer Address = " << p2 << endl;

    // value print 
    cout << "Variable value = " << i << endl;
    cout << "1st pointer carry to variable value = " << *p << endl;
    cout << "2nd pointer carry to variable value = " << **p2 << endl;
    */

    //cout << endl << *p2 << endl;
    cout << &p  << endl;
    
    update(p2);

    return 0;
}