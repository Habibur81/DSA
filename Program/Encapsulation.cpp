#include <iostream>
using namespace std;

class employee{
    private:
        int salary;

       
    public:
        //setter
        void setSalary(int salary){
            this->salary = salary;
        }
        //getter
        int getSalary(){
            return salary;
        }
};




int main(){

    employee e;
    e.setSalary(50000);
    cout << "First Employee Salary = " << e.getSalary() << endl;

    employee e2;
    e2.setSalary(60000);
    cout << "Second Employee Salary = " << e2.getSalary() << endl;


    return 0;
}