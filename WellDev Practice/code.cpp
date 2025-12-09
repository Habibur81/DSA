#include <bits/stdc++.h>
using namespace std;

void func(){
    
    int *arr = new int[10];
    
    for(int i=0; i < 10; i++){
        arr[i] = (i + 1) * 10;
    }
    
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " " ;
    }
    
    cout << endl;
    
    delete[] arr;
}

//linear Search

int LinearSearch(int arr[], ins size, int sval){
    for(int i=0; i < size; i++){
        if(arr[i] == key){
            return i;
        }
        
        return -1;
    }
}

int BinarySearch(int arr[], int s, int val){
    
    int l = 0;
    int r = s - 1;
    
    
    while(l <= r){
        int mid = l + (r - l)/2;
        
        if(arr[mid] == val){
            return mid;
        }else if(arr[mid] < val){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    
    return -1;
    
}

int main()
{
    
    func();
    
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "First element of array " << arr[0] << endl;
    cout << "Third element of array " << arr[2] << endl;
    
    cout << "First element of array memory address " << &arr[0] << endl;
    cout << "Second element of array memory address " << &arr[1] << endl;
    

    return 0;
}