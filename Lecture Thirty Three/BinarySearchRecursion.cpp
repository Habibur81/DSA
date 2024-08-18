#include <iostream>
using namespace std;

void print(int* arr, int s, int e){
    for(int i = s; i <= e; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

bool binarySearch(int* arr, int s, int e, int k){
    print(arr, s, e);

    if(s > e){
        return false;
    }

    int mid = s + (e - s) / 2;
    cout << "Mid value " << arr[mid] << endl;

    if(arr[mid] == k){
        return true;
    }

    if(arr[mid] < k){
        binarySearch(arr, mid+1, e, k);
    }else{
        binarySearch(arr, s, mid-1, k);
    }
}






int main(){
    int arr[5] = {2, 3, 5, 6, 7};
    int start = 0;
    int end = 4;
    int felement = 3;
    bool ans = binarySearch(arr, start, end, felement);

    if(ans){
        cout << "Present" << endl;
    }else{
        cout << "Absent" << endl;
    }

    return 0;
}