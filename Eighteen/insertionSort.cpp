#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector <int> arr = {10, 2, 8, 4, 6};
    int n = arr.size();

    for(int i = 1; i < n; i++){

        int tem = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > tem)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = tem;

        for(int k = 0; k < n; k++){
            cout << arr[k] << " ";
        } cout << endl;
        
        

    } 

    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }

    return 0;

}