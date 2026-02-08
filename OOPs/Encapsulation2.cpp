#include <bits/stdc++.h>
using namespace std;

class BankAccount{
    private:
        double balance;
    public:
        BankAccount(double initialBanlance){
            if(initialBanlance >= 0){
                balance = initialBanlance;
            }else{
                balance = 0;
                cout << "Initial Balance invalid, setting balance to 0." << endl;
            }
        }

        double getBlance(){
            return balance;
        }

        void deposite(double amount){
            if(amount > 0){
                balance += amount;
            }else{
                cout << "Please deposite positive amount" << endl;
            }
                
        }

        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
            }else{
                cout << "Insufficent balance!" << endl;
            }
        }

};

int main(){

    //BankAccount myAccount(1000);
    BankAccount* myAccount = new BankAccount(1000);

    //cout << myAccount << endl;
    cout << myAccount->getBlance() << endl;

    delete myAccount;

    return 0;
}