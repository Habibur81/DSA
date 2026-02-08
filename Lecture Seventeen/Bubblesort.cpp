#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector <int> arr = {10, 2, 8, 4, 6};
    int n = arr.size();

    for(int i = 0; i < n - 1; i++){

        bool swapped = false;

        for(int j = 0; j < n - i - 1; j++){

            if(arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                swapped = true;
            }


        }
        
        if(swapped == false){
            break;
        }

    } 

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;

}