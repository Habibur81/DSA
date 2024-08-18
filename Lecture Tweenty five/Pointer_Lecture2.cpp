#include <iostream>
using namespace std;

int main(){
    int arr[10] = {2,5,7};

    /*cout << "Address of array " << arr << endl;
    cout << "Address of array " << &arr[0] << endl;

    cout << "first index value " << *arr << endl;
    //jehetu *arr first index address er value printclea kore 
    cout << "first index value + 1 " << *arr+1 << endl;
    //arr jehetu address print kore first index address er sathe 1 add kore second index 
    // er define korche er sathe * thakai second er value print korche.
    cout << "second index address " << * (arr + 1) << endl;
    //*(arr) first index value print kore er sathe 1 add hoyeche.
    cout << "second index address " << *(arr) + 1 << endl;
    cout << arr[2] << endl;
    cout << *(arr + 2) << endl;

    int i = 2;
    // here i[arr] = *(i + arr)
    cout << i[arr] << endl;
    */

   /*int temp[10];
   cout << sizeof(temp) << endl;
   cout << sizeof(*temp) << endl;
   cout << sizeof(&temp) << endl;

   cout << endl << endl;

   int *ptr = &temp[10];
   
   cout << sizeof(ptr) << endl;
   cout << sizeof(*ptr) << endl;
   cout << sizeof(&ptr) << endl;
   */

  /*int a[10] = {20, 30, 40};
  cout << &a[0] << endl;

  int *p = &a[0];
  cout << a << endl;
  cout << p << endl;
  cout << &p << endl;
  */

  int array[10] ;
  cout << array << endl;
  //ERROR
  //array = array + 1;

  int *prt = &array[0];
  cout << prt << endl;
  prt = prt + 1;

  cout << prt << endl;
    

    return 0;
}