#include<iostream>
using namespace std;

int funCheck(string value){
    if(value == "true" || value== "1"){
        return true;
    }else if(value == "false" || value == "0"){
        return false;
    }
}

int main()
{
    cout << funCheck("false") << endl;

    return 0;
}