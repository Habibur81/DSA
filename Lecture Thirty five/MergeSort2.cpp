#include <iostream>
using namespace std;

// void Merge(int* arr, int f, int mid, int l){
//             int len1 = mid - f+1;
//             int len2 = l - mid;
            
//             int arr1[len1];
//             int arr2[len2];
            
//             for(int i=0; i<len1; i++){
//                 arr1[i] = arr[f+i];
//                // cout <<  arr1[i] << " ";
//             }
            
//             for(int i=0; i<len2; i++){
//                 arr2[i] = arr[mid+1+i];
//                 //cout << arr2[i] << " ";
//             }
            
//             int i=0, j=0, k=f;
            
//             while(i < len1 && j < len2){
//                 if(arr1[i] < arr2[j]){
//                     arr[k] = arr1[i++];
//                 }else{
//                     arr[k] = arr2[j++];
//                 }
//                 k++;
//             }
            
//             while(i < len1){
//                 arr[k] = arr1[i++];
//                 k++;
//             }
            
//             while(j < len2){
//                 arr[k] = arr2[j++];
//                 k++;
//             }
            
            
//         }

// void merge(int* arr, int findex, int mid, int lindex){

//     // //int mid = findex - (lindex - findex)/2;
//     // int len1 = mid - findex + 1;
//     // int len2 = lindex - mid;
//     // //cout << "Hello"<< endl;
//     // int temArray1[len1], temArray2[len2];

//     // for(int i = 0; i < len1; i++){
//     //     temArray1[i] = arr[findex + i];
//     //   //  cout << temArray1[i] << endl;
//     // }

//     // for(int i = 0; i < len2; i++){
//     //     temArray2[i] = arr[mid + 1 + i];
//     //  //   cout << temArray2[i] << endl;
//     // }

//     // int i = 0, j = 0, k = findex;
//     // while(i < len1 && j < len2){
//     //     if(temArray1[i] < temArray2[j]){
//     //         arr[k] = temArray1[i++];
//     //     }else{
//     //         arr[k] = temArray2[j++];
//     //     }
//     //     k++;
//     // }

//     // while (i < len1)
//     // {
//     //     arr[k] = temArray1[i++];
//     //     k++;
//     // }

//     // while (j < len2)
//     // {
//     //     arr[k] = temArray2[j++];
//     //     k++;
//     // }
    
    

// }

// void mergeSort(int* arr, int findex, int lindex){

//     if(findex < lindex){
//         int mid = findex + (lindex - findex)/2;
//         mergeSort(arr, findex, mid);
//         mergeSort(arr, mid+1, lindex);
//         Merge(arr, findex, mid, lindex);
//     }    

// }


void merge(int* nums, int f, int m, int l){
        int len1 = m-f+1;
        int len2 = l-m;
        int arr1[len1], arr2[len2];

        for(int i=0; i < len1; i++){
            arr1[i] = nums[f+i]; 
        }

        for(int i=0; i < len2; i++){
            arr2[i] = nums[m+i+1];
        }

        int i = 0, j = 0, k = f;
        //cout << k << endl;

        while(i < len1 && j < len2 ){
            if(arr2[j] < arr1[i]){
                nums[k] = arr1[i++];
                cout << " i from " << k << endl;
            }else{
                nums[k] = arr2[j++];
                cout << " j from " << k << endl;
            }
            k++;
        }

        while(i < len1){
            nums[k] = arr1[i++];
            cout << " i from " << k << endl;
            k++;
        }

        while(j < len2){
            nums[k] = arr2[j++];
            cout << " j from " << k << endl;
            k++;
        }

    }

    void MergeSort(int* nums, int f, int l){
        if(f < l){
            int m = f + (l - f)/2;
            MergeSort(nums, f, m);
            MergeSort(nums, m+1, l);
            merge(nums, f, m, l);
            //cout <<"f " << f << endl;
        }      
    }

int main(){
    int arr[4] = {5,2,3,1};
    int findex = 0;
    int lindex = 4-1;

    MergeSort(arr, findex, lindex);

    // for(int i = 0; i <= 4; i++){
    //     cout << arr[i] << " ";
    // }

    return 0;
}