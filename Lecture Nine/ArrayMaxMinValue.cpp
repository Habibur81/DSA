#include <climits>
#include <iostream>
using namespace std;

int getMin(int arr[], int size){

   int minvalue = INT_MAX; 

   for(int i = 0; i < size; i++){
        if(arr[i] < minvalue){
            minvalue = arr[i];
        }

       // minvalue = min(minvalue, arr[i]); building function
   }

   return minvalue;

}

int getMax(int arr[], int size){

   int maxvalue = INT_MIN; 

   for(int i = 0; i < size; i++){
        if(arr[i] > maxvalue){
            maxvalue = arr[i];
        }

       // maxvalue = max(maxvalue, arr[i]); building function
   }

   return maxvalue;

}


int main(){

    int size;
    cout<<"Enter array size: ";
    cin>>size;

    int arr[100];

    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout << "Array min value is = " << getMin(arr, size) << endl;
    cout << "Array max value is = " << getMax(arr, size) << endl;

    return 0;
}