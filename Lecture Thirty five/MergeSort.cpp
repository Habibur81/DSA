#include <iostream>
using namespace std;

void merge(int* arr, int fidx, int m, int lidx){
    //cout << "mid "<<m<<endl;
    int len1 = m - fidx + 1;
    int len2 = lidx - m;
    //cout << "fidx=" << fidx << " lidx=" << lidx << endl;
    //cout << "len1=" << len1 <<" len2="<<len2<<endl;

    int larr[len1];
    int rarr[len2];
    
    for(int i = 0; i < len1; i++){
        larr[i] = arr[fidx+i];
        //cout <<"larr=" << i <<endl;
        //cout << arr[fidx+i] << endl;
    }
   //cout << endl;
    for(int j = 0; j < len2; j++){
        rarr[j] = arr[m+j+1];
        //cout <<"rarr=" << j <<endl;
        //cout << arr[m+j+1] << endl;
    }
   //cout << endl;

    int i = 0;
    int j = 0;
    int k = fidx;

    while (i < len1 && j < len2){

        if(larr[i] <= rarr[j]){
            arr[k] = larr[i];
            i++;
        }else{
            arr[k] = rarr[j];
            j++;
        }
        cout << "while i+j=" << k << " find=" << fidx << endl;
        k++;
    }

    while (i < len1)
    {
        arr[k] = larr[i];
        i++;
        cout << "while i=" << k << " find=" << fidx << endl;
        k++;
    }

    while (j < len2)
    {
        arr[k] = rarr[j];
        j++;
        cout << "while j=" << k << " find=" << fidx << endl;
        k++;
    } 

    cout << endl << endl;
}

void MSort(int* arr, int fidx, int lidx){
    if(fidx >= lidx){
        return;
    }
        
    
    int mid = fidx + (lidx - fidx)/2;

    MSort(arr, fidx, mid);
    MSort(arr, mid+1, lidx);
    merge(arr, fidx, mid, lidx);
}

int main(){

    int arr[5] = {3, 7, 0, 1, 5};
    int fidx = 0;
    int lidx = 4;

    MSort(arr, fidx, lidx);

    for(int i = 0; i <= lidx; i++){
        cout << arr[i] << " ";
    }cout << endl;

}