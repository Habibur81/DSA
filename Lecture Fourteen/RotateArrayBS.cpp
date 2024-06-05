#include <iostream>
using namespace std;

int search(int a[], int len, int tar){
    int l = 0;
    int h = len - 1;
    int target = tar;

    while(l <= h){
        int m = l + (h - l) / 2;

        if(target == a[m]){
            return m;
        }else if(a[l] <= a[m]){
            if(a[l] <= target && target < a[m]){
                h = m - 1;
            }else{
                l = m + 1;
            }
            
        }else{
            if(a[m] < target && target <= a[h]){
                l = m + 1;
            }else{
                h = m - 1;
            }
        }

    }
}

int main(){

    int a[7] = {4, 5, 6, 7, 8, 1, 2};
    int len = sizeof(a) / sizeof(a[0]);
    int target = 5;
    
    cout << search(a, len, target) << endl;

    return 0;
}