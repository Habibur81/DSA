#include <iostream>
using namespace std;

void NumCount(int num){
    for(int i = 1; i <= num; i++){
        cout<< i << " ";
    }
    cout<<endl;

}

int main(){

    int num;
    cin>>num;

    NumCount(num);

    return 0;
}