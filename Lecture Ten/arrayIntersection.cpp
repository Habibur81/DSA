#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int* intersection(int arr[], int arr2[], int len1, int len2){
    static int ans[100];
    int k = 0;

    for (int i = 0; i < len1; i++)
    {
       for (int j = 0; j < len2; j++)
       {
            if(arr[i] == arr2[j]){
                
                ans[k] = arr[i];
                k++;
                arr2[j] = -112231;
                break;
            }
       }
       
    }

    return ans;
    
}

int main(){
    int arr[5] = {10, 5, 1, 2, 3};
    int arr2[4] = {9, 2, 1, 10};
    int len = sizeof(arr)/sizeof(int);
    int len1 = 5;
    int len2 = 4;

   int* arr3 = intersection(arr, arr2, len1, len2);
   for(int i=0 ; i<5; i++)
        if(arr3[i] > 0)
		    cout<<arr3[i]<<" ";
        else
            break;

    return 0;
}