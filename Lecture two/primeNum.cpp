#include <iostream>
using namespace std;

void PrimeNum(int n){
    int i=2;
    int con;

    while(i < n){
        if(n == 2){
            i = n;
        }else if(n % i == 0){
            con = 1;
            i = n;
        }
        i++;
    }

    if(con == 1){
        cout<<"Not Prime Number!"<<endl;
    }else{
        cout<<"Prime Number!"<<endl;
    }
        
}

int main(){
    int n;
    cout<<"Enter a Number of check Prime of nun prime: ";
    cin>>n;

    PrimeNum(n);

    return 0;
}