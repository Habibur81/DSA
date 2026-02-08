#include <iostream>
using namespace std;

int uniqueValue(int arr[], int length){
    int ans = 0;
    for(int i = 0; i < length; i++){
        ans = ans^arr[i];
       // cout<<ans<<" ";
    }

    return ans;
}

int main(){

    int arr[7] = {4,3,1,3,1,4,8};
    int length = sizeof(arr)/sizeof(int);

    cout<<uniqueValue(arr, length)<<" ";
    

    return 0;
}