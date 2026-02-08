#include <iostream>
using namespace std;

void sortArr(int a[], int l){
    int lo = 0;
    int h = l - 1;
    int tem;

    while (lo <= h)
    {
        if(a[lo] == 0){
            lo++;
        }else if(a[h] == 1){
            h--;
        }else if(a[lo] == 1){
            tem = a[h];
            a[h] = a[lo];
            a[lo] = tem;
            lo++;
            h--;
        }
    }
    
    
}

int main(){
    int a[5] = {1,0,1,0,0};
    int l = 5;
    sortArr(a,l);

    for(int i = 0; i < l; i++){
        cout << a[i] << " ";
    }


    return 0;
}