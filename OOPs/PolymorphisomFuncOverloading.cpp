#include <iostream>
using namespace std;

class calculation{
    public:
    int a;
    int b;

    int sum(int num1, int num2){
        return num1 + num2;
    }

    int sum(int num1, int num2, int num3){
        return num1+num2+num3;
    }

    int sum(int num1, int num2, int num3, int num4){
        return num1+num2+num3+num4;
    }

    void operator+ (calculation& obj){
        cout << "Hello Habib" << endl;
    }


};


int main(){
    calculation obj1, obj2;

    int n1 = 20;
    int n2 = 10;
    cout << "Sum = " << obj1.sum(10, 20) << endl;
    cout << "Sum = " << obj1.sum(10, 40, 20) << endl;
    cout << "Sum = " << obj1.sum(50, 20, 10, 20) << endl;
    


    return 0;
}