#include<bits/stdc++.h>
using namespace std;

int main(){
    int num[] = {-1,0,1,2,-1,-4};
    int len = sizeof(num)/sizeof(num[0]);
    sort(num, num+len);

    for(int i=0; i<len; i++){
        cout << num[i] << endl;
    }

    return 0;
}