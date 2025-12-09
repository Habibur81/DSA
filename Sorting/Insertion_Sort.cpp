#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> arr = {9, 5, 1, 4, 3};
    int n = arr.size();
    
    for(int i = 1; i < n; i++){
        int j = i;
        while(j > 0){
            if(arr[j] < arr[j - 1]){
                swap(arr[j], arr[j - 1]);
                j--;
            }else{
                break;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}