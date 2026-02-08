#include <iostream>
using namespace std;

int mySqrt(int x) {
        int ans = 0;

        for(int i = 0; i <= x; i++){
            ans = (i * i);
            if( ans == x){
                return i;
            }else if(ans > x){
                i = i - 1;
                return i;
            }
        }

        return -1;
    }

int main(){

    cout << mySqrt(1) << endl;

    return 0;
}