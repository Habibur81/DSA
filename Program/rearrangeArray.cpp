#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main(){

    vector<int> nums = {3,1,-2,-5,2,-4};
    int len = nums.size();
    cout << len << endl;
    vector<int>result(len);
    int p=0, n=1;
    for(int i=0; i<len; i++){
        if(nums[i] > 0){
            //cout << nums[i] << endl;
            result[p] = nums[i];
            p += 2;
        }else{
            //cout << nums[i] << endl;
            result[n] = nums[i];
            n += 2;
        }
    }

    // for(int i=0; i<len; i++){
    //     cout << nums[i] << " ";
    // }



    // vector<int>result;
    // vector<int>num2;
    // vector<int>num3;   

    // for(int i=0; i<len; i++){
    //     if(nums[i]>0){
    //         num2.push_back(nums[i]);
    //     }else{
    //         num3.push_back(nums[i]);
    //     }
    // }
    // int n1 = 0;
    // int n2 = 0;
    // for(int i=0; i<len; i++){
    //     if(i%2 == 0){
    //         result.push_back(num2[n1++]);
    //     }else{
    //         result.push_back(num3[n2++]);
    //     }
    // }


    for(int i=0; i<len; i++){
        cout << result[i] << " ";
    }



    // for(int i=0; i<sizeof(nums2)/sizeof(nums2[0]); i++){
    //     cout << nums2[i] << " ";
    // }





    // for(int i=0; i<len; i++){
    //     if(i%2 == 0){
    //         if(nums[i] > 0){
    //             nums[i]=nums[i];
    //         }else{
    //             for(int j=i+1; j<len; j++){
    //                 if(nums[j]<0){
    //                     j++;
    //                 }else{
    //                     int temp = nums[i];
    //                     nums[i] = nums[j];
    //                     nums[j] = temp;
    //                 }
    //             }
    //         }
    //     }else{
    //         if(nums[i] < 0){
    //             nums[i] = nums[i];
    //         }else{
    //             for(int j=i+1; j<len; j++){
    //                 if(nums[j]>0){
    //                     j++;
    //                 }else{
    //                     int temp = nums[i];
    //                     nums[i] = nums[j];
    //                     nums[j] = temp;
    //                 }
    //             }
    //         }
    //     }        
    // }

    // for(int i=0; i<len; i++){
    //     cout << nums[i] << " "; 
    // }

    // cout << endl;

    return 0;
}