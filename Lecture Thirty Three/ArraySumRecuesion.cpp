#include <iostream>
using namespace std;

int getSum(int* arr, int s){

    if(s == 0){
         return 0;
    }           

    return arr[s - 1] + getSum(arr, s-1);
    
}

int main(){
    int arr[5] = {1, 20, 3, 4, 5};
    int size = 5;

    int sum = getSum(arr, size);

    cout << "Sum = " << sum << endl;

    return 0;
}