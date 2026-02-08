#include <iostream>
using namespace std;

int main(){
    int num  = 1500;
    int result = 0;

    while (num != 0)
    {
        int divi;
        int result = 0;

        if(num >= 100){
            divi = 100;
            result = num / 100;
            num  = num % 100;
        }else if(num >= 50){
            divi = 50;
            result = num / 50;
            num  = num % 50;
        }else if(num >= 20){
            divi = 20;
            result = num / 20;
            num  = num % 20;
        }else if(num >= 10){
            divi = 10;
            result = num / 10;
            num  = num % 10;
        }else{
            divi = 1;
            result = num / 1;
            num  = num % 1;
        }

        switch (divi)
        {
        case 100:
            cout<< "100 notes = " << result <<endl;
            break;
        case 50:
            cout<< "50 notes = " <<result <<endl;
            break;
        case 20:
            cout<< "20 notes = " << result <<endl;
            break;
        case 10:
            cout<< "10 notes = " << result <<endl;
            break;
        case 1:
            cout<< "1 notes = " << result <<endl;
            break;
        
        default:
            break;
        }

    }
    

    return 0;
}