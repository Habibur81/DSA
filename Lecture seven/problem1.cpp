#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(){
        int n = 16;
        int num = n;
        int CheckNum = 0;
        int i = 0;  

        while(n >= 1){
            
            CheckNum = pow(2, i);
            if(CheckNum == num){
                return true;
            }
            i++;
            n = n / 2;
        }

        return false;

       // cout<<CheckNum;

        // if(CheckNum == num){
        //     return true;
        // }else{
        //      return false;
        // }

        
}