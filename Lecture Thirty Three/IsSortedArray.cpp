#include <iostream>
using namespace std;

bool isSorted(int* a, int size){

    if(size == 0 || size == 1)
        return true;
    
    if(a[0] > a[1]){
        return false;
    }else{
        bool ans = isSorted(a + 1, size -1);

        return ans;
    }

}

int main(){
    int arr[5] = {1, 7, 3, 4, 5};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans){
        cout << "Array is sorted" << endl;
    }else{
        cout << "Array is not sorted" << endl;
    } 

    return 0;
}