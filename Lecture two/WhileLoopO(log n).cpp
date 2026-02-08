#include <iostream>
using namespace std;

int main(){
    int n = 8;
    while(n > 1){
        cout<<n<<endl;
        n = n/2;
        cout<<n<<"\n"<<endl;
    }
}
//time complexity O(log n)