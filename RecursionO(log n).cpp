#include <iostream>
using namespace std;

void recuFunc(int n){
    if(n > 1){
        cout<<n<<endl;
        n = n/2;
        cout<<n<<"\n"<<endl;
        recuFunc(n);
    }
}

int main(){
    int n = 8;
    recuFunc(n);


    return 0;
}
//time complexicy O(log n)