#include <iostream>
using namespace std;

bool Ispossible(int a[], int n, int s, int mid){
    int sum = 0;
    int stu = 1;
    for(int i = 0; i < n; i++){
        if(sum + a[i] <= mid){
            sum = sum + a[i];
        }else{
            stu++;
            if(stu > s || a[i] > mid){
                return false;
            }
            sum = a[i];
        }
    }

    return true;
}

int main(){
    int a[4] = {10, 20, 30, 40};
    int n = 4;
    int s = 2;
    int sum = 0;

    for(int i = 0; i < 4; i++){
        sum = sum + a[i];
    }
    int l = 0;
    int h = sum;
    

    int ans = -1;

    while(l <= h){
        int mid = l + (h - l) / 2;
        if(Ispossible(a, n, s, mid)){
            ans = mid;
            h = mid - 1;
        }else{
            l = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}