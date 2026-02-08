#include <iostream>
using namespace std;

bool search(int arr[], int size, int fele){

    for(int i = 0; i < size; i++){
        if(arr[i] == fele){
            return true;
        }
    }

    return false;
}

int main()
{
    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
    int size = sizeof(arr)/sizeof(int);
    int n;
    cout<<"Enter a number ";
    cin>>n;    

    bool found = search(arr, size, n);

    if(found){
        cout<<"Found "<< n <<" in array"<<endl;
    }else{
        cout<<"Not found "<< n <<" in array"<<endl;
    }

    return 0;
}