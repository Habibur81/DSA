#include <iostream>
using namespace std;

int arrEleSum(int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int arr[100];
    int size;
    cout<<"Enter array size: ";
    cin>>size;

    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<<"Array element sum = "<<arrEleSum(arr, size)<<endl;

    return 0;
}