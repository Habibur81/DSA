#include <iostream>
using namespace std;

int main(){
    int arr[] = {20, 10, 30, 40}; // execute time 0.88s
    int arrSize = sizeof(arr)/sizeof(arr[0]); // execute time .99
        arrSize = arrSize; // execute time .99

    for(int i=0; i<arrSize; i++){ // execute time n
        cout<<"Array Elememt is "<<arr[i]<<"\n"<<endl; // execute time .88
    }

    return 0;
}

//O(1)+O(1)+O(1)+O(n)+O(1) = O(n) not consider O(1) because here worst case in O(n)

// ekhane jehetu loop n tomobar execute korbe tai 