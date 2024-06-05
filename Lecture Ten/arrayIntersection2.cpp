#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int* intersection(int arr[], int arr2[], int len1, int len2){
    static int ans[100];
    int k = 0;
    int i = 0;
    int j = 0;

    while (i < len1 && j < len2)
    {
        if(arr[i] == arr2[j]){
            ans[k] = arr[i];
            k++;
            arr2[j] = -1;
            i++;
            j++;
        }else if(arr[i] < arr2[j]){
            i++;
        }else{
            j++;
        }
    }
    

    return ans;
    
}

int main(){
    int arr[5] = {1, 2, 3, 5, 10};
    int arr2[4] = {1, 2, 9, 10};
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