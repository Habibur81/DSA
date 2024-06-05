#include <climits>
#include <iostream>
using namespace std;

int duplicateValue(int arr[], int length){

    int arr2[2];
    int k = 0;
    for (int i = 0; i < length; i++)
    {
      for (int j = 0; j < length; j++)
      {
        if(i == j){
          j++;
        }

        if(arr[i] == arr[j]){
          arr2[k] = arr[i];
          k++;
          break;
        }
      }

      arr[i] == INT_MIN;
    }

    for (int i = 0; i < sizeof(arr2)/sizeof(int); i++)
    {
       cout<<arr2[i]<<" ";
    }
    
   
}

int main(){

    int arr[5] = {1, 2, 4, 1, 4};
    int length = 5;

    duplicateValue(arr, length);

  return 0;
}