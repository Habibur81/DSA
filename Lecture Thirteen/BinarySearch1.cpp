#include <iostream>
using namespace std;

int firstSide(int a[], int len, int k){

    int an = -1;
    int l = 0;
    int h = len - 1;

    while(l <= h){
        int m = l + (h - l)/2;
        if(k == a[m]){
            an = m;
            h = m - 1;
        }else if(k > a[m]){
            l = m + 1;
        }else if(k < a[m]){
            h = m - 1;
        }
    }


    return an;
    
}

int secondSide(int a[], int len, int k){

    int an = -1;
    int l = 0;
    int h = len - 1;

    while(l <= h){
        int m = l + (h - l)/2;
        if(k == a[m]){
            an = m;
            l = m + 1;
        }else if(k > a[m]){
            l = m + 1;
        }else if(k < a[m]){
            h = m - 1;
        }
    }


    return an;

}



int main(){

    int a[6] = {1,2,2,2,2,3};
    int len = 6;
    int k = 2;
    int ans = secondSide(a, len, k);

    cout << ans << endl;



    return 0;
}