#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr){
    int arrSize = arr.size();
    vector<int>temp(arrSize);
    int i = 0;
    while(arrSize > 0){
        temp[i] = arr[arrSize - 1];
        cout << temp[i] << endl;
        i++;
        arrSize--;
    }

    for(int i = 0; i < arrSize; i++){
       arr[i] = temp[i];
       cout << arr [i] << endl;
    }
}

int main(){

    vector<int> arr = { 1, 4, 3, 2, 6, 5 };
    reverseArray(arr);

    // for(int i=0; i < arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    return 0;
}