#include <iostream>
using namespace std;

int main(){
    int a[4] = {0,10,5,2};
    int len = sizeof(a)/sizeof(a[0]);
    int i = 0;
    int ans = -1;
    int ind = 0;

    while (len > 0)
    {
        if(a[i] > ans){
    
            ans = a[i];
            ind = i;
            i++;
            len--;
        }else{
            i++;
            len--;
        }
        
    }

    cout << ind << endl;
    
    return 0;
}