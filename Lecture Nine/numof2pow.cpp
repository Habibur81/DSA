#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;

    while(n > 0){

        int ch = n%2;
        if(ch & 1 == 1){
            count++;
        }

        n = n/2;
    }

    if(count == 1){
        cout<<"The number is power of 2 "<<endl;
    }else{
        cout<<"The number is not power of 2 "<<endl;
    }


    return 0;
}