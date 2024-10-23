#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int getMax(vector<int> arr){
    int ArrMax = INT_MIN;
            
    for(int i=0; i < arr.size(); i++){
                
        if(arr[i] > ArrMax){
            ArrMax = arr[i];
        }
    }
            
    return ArrMax;
}
int getMin(vector<int> arr){
            int ArrMin = INT_MAX;
            for(int i=0; i < arr.size(); i++){
                if(arr[i] < ArrMin){
                    ArrMin =  arr[i];   
                }
            }
            
            return ArrMin;
}

int main(){

    vector<int> arr = { 1, 4, 3, 2, 6, 5 };
    int maxValue = getMax(arr);
    int minValue = getMin(arr);

    cout << "Array Max value = " << maxValue << endl;
    cout << "Array Min value = " << minValue << endl;

    // for(int i=0; i < arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    return 0;
}