#include <iostream>
using namespace std;

bool LinearSearch(int* arr, int size, int felement){
    if(size == 0){
        return false;
    }

    if(arr[0] == felement){
        return true;
    }else{
        bool ans = LinearSearch(arr+1, size-1, felement);
        return ans;
    }
}

int main(){
    
    int arr[5] = {7,9,2,5,6};
    int size = 5;
    int felement = 10;

    bool ans = LinearSearch(arr, size, felement);
    if(ans){
        cout << "Present"<<endl;
    }else{
        cout << "absent" << endl;
    }

    return 0;
}