#include <iostream>
using namespace std;

bool search(int arr[], int size, int fele){

    int mid = 0;
    int low = 0;
    int high = size - 1;

    for(int i = 0; i < size; i++){

        mid = (low + high)/2;

        if(arr[mid] == fele){
            cout<<mid<<endl;
            return true;
        }else if(arr[mid] > fele){
            cout<<mid<<endl;
            high = mid-1;
        }else if(arr[mid] < fele){
            cout<<mid<<endl;
            low = mid+1;
        }
    }

    return false;
}

int main(){

    int arr[10] = {5,10,15,20,25,30,35,40,45,50};
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