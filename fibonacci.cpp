#include <iostream>
using namespace std;

void fib(int n1, int n2, int inum){
    for(int i=0; i<=inum; i++){
            cout<<n1<<" "<<endl;
        int tem = n1;
            n1=n2;
            n2=tem+n1;
    }
    
}

int main(){
    int n1=0;
    int n2=1;
    int inum=8;

    fib(n1, n2, inum);
}