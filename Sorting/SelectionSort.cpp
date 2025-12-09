#include <iostream>
using namespace std;

int main() {
    int arr[6] = {9, 7, 5, 3, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    // Approach 2 better approach for my code
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;

    // Approach 2 better approach for my code

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }

    return 0;
}