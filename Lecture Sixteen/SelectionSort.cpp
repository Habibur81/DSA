#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector <int> arr = {6, 2, 8, 4, 10};
    int n = arr.size();

    for(int i = 0; i < n - 1; i++){
        int midx = i;

        for(int j = i+1; j < n; j++){

            if(arr[midx] > arr[j]){
                midx = j;
            }
        }

        if(midx != i){
            int tmp = arr[i];
            arr[i] = arr[midx];
            arr[midx] = tmp;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;

}