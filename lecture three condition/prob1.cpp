#include <iostream>
using namespace std;

void fun1(int a, int b){
    if(a>b){
        cout<<"A is greater than B"<<endl;
    }else{
        cout<<"B is greater than A"<<endl;
    }
}

void fun2(int n){
    if(n > 0){
        cout<<"Number is positive!!!!!!!!!"<<endl;
    }else if ( n < 0){
        cout<<"Number is Negative"<<endl;
    }
    else{
        cout<<"Zero is neither positive nor negative number. It is a neutral number. It is border of positive and negative numbers"<<endl;
    }
}

int main(){
    // int a,b;
    // cout<<"Enter A Value: ";
    // cin>>a;

    // cout<<"Enter B value: ";
    // cin>>b;

    // fun1(a, b);

    // cout<<"\n";

    // int n;
    // cout<<"Enter a Numer that can positive or negative: ";
    // cin>>n;
    //fun2(n);

    // if(n == 9){
    //     cout<<"NINEY"<<endl;
    // }
    // if(n > 0){
    //     cout<<"POSITIVE";
    // }else{
    //     cout<<"NEGATIVE"<<endl;
    // }

    // int a = 2;
    // int b = a+1;

    // if((a=3) == b){
    //     cout<<a<<endl;
    // }else{
    //     cout<<a+1;
    // }


    // return 0;

    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Letter is small"<<endl;
    }else if(ch>='A' && ch<='Z'){
        cout<<"Letter is Capital letter"<<endl;
    }else if(ch>='0' && ch<='9'){
        cout<<"Numeric number"<<endl;
    }else{
        cout<<"Character is a to z, A to Z and 0 to 9"<<endl;
    }
}