#include <iostream>
using namespace std;

int update(int arr[], int n){
    arr[0] = 200;

    cout<<"Inside the function " <<endl;

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"Going to main function"<<endl;
}

int main()
{

    int arr[3] = {1,2,3};
    update(arr, 3);
    cout<<"main function array print "<<endl;

    for(int i = 0; i < 3; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    //array parameter a address pathai tai onno function a update korle main
    //function a array update hoye jai.

    return 0;
}