#include <iostream>
using namespace std;

bool FuncEventOdd(int num){

    if(num & 1){
        return 0; // odd
    }else{
        return 1; // event
    }


}

int main()
{

    int num ;
    cin >> num;

    int result = FuncEventOdd(num);
    if(result == 0){
        cout<<"Odd number "<< num << " return " << result <<endl;
    }else{
        cout<<"Event number "<< num << " return " << result <<endl;
    }


    return 0;
}