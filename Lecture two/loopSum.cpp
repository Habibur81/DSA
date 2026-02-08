#include <iostream>
using namespace std;

void LoopSum(int n){
    
    int sum = 0;

    for(int i=1; i <= n; i++){
        sum = sum + i;
    }

    cout<<"Sum Equal to "<<sum<<endl;
} 


int main(){
    int n = 5;
    LoopSum(n);
    return 0;
}