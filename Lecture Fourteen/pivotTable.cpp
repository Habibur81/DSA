#include <iostream>
using namespace std;

int pivotTable(int arr[], int n){
    int s = 0;
    int e = n - 1;
    

    while (s < e)
    {
        int m = s + (e - s) / 2;

        if(arr[m] >= arr[0]){
            s = m + 1;
        }else{
            e = m;
        }

        
    }
    
    return s;
}


int main(){

    int arr[5] = {3, 5, 10, 1, 17};

 

    cout << pivotTable(arr, 5) << endl;

    return 0;
}