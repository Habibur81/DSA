#include <iostream>
using namespace std;

int setbit(int a, int b){

    int result = 0;

    while (a > 0)
    {
        if(a%2 != 0){
            result = result + 1;
        }
        a = a/2;
    }

    while (b > 0)
    {
        if(b%2 != 0){
            result = result + 1;
        }
        b = b/2;
    }



    return result;

}

int setbit1(int a, int b){

    int count = 0;

    while(a){

        if((a & 1) > 0){
            count++;
        }

        a >>= 1;     

        return count;
    }
}


int main(){

    int a, b;
    cout << "Enter number a: ";
    cin >> a >> b;

    int result = setbit(a, b);
    cout << "Result is = " << result << endl;

    return 0;
}