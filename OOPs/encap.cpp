#include<bits/stdc++.h>
using namespace std;

class balance{
    private:
        float balan = 0;
    public:
       float addBalance(float num){
            if(num > 0){
                balan += num;
            }else{
                cout << "Please enter positive amount" << endl;
            }
       }
       float withdrowBalance(float num){
            if(num > 0){
                if(num <= balan){
                    balan -= num;        
                }else{
                    cout << "Insufficient balance" << endl;
                }
                
            }else{
                cout << "Please enter positive amount" << endl;
            }
       }

       float myBalance(){
            return balan;
       }

};

int main(){

    balance b;
    b.addBalance(10);
    b.withdrowBalance(5);

    cout << "Current Balance " << b.myBalance() << endl;

}