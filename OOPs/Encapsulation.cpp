#include <iostream>
using namespace std;

class myClass{ 
    //In Encapsulation property can't access outside of class.  
    private:
        int num1;
        int num2;
    public:
        void setNum(int num1, int num2){
            this->num1 = num1;
            this->num2 = num2;
        }

        void addition(){
            cout << "Addition = " << num1 + num2 << endl;
        }

        void subtraction(){
            cout << "Subtraction = " << num1 - num2 << endl;
        }

        void multiplication(){
            cout << "Multication = " << num1 * num2 << endl;
        }

        void division(){
            cout << "Division = " << num1 / num2 << endl;
        }
};

int main(){
    myClass obj;
    obj.setNum(20, 10);
    obj.addition();
    obj.subtraction();
    obj.multiplication();
    obj.division();

    return 0;
}