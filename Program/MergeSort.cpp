#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int indexf, int mid, int indexl){
    int tvs1 = mid - indexf + 1;
    int tvs2 = indexl - mid;
    vector<int> l(tvs1), r(tvs2);

    for(int i = 0; i < tvs1; i++){
       l[i] = arr[indexf + i];
    }

    for(int j = 0; j < tvs2; j++){
       r[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = indexf;

    while(i < tvs1 && j < tvs2){
        if(l[i] <= r[j]){
            arr[k] = l[i];
            i++;
        }else{
           arr[k] = r[j];
            j++; 
        }

        k++;
    }

    while (i < tvs1)
    {
        arr[k] = l[i];
        i++;
        k++;
    }

    while (j < tvs1)
    {
        arr[k] = r[j];
        j++;
        k++;
    }
    
        


}

void mergeSort(vector<int>& arr, int indexf, int indexl){

    if(indexf >= indexl){
        return;
    }  

    int mid = indexf + (indexl - indexf) / 2;

    mergeSort(arr, indexf, mid);
    mergeSort(arr, mid + 1, indexl);

    merge(arr, indexf, mid, indexl);

}

int main(){

    vector<int> arr = {11, 9, 12, 8};
    int indexf = 0;
    int indexl = arr.size() - 1;
    mergeSort(arr, indexf, indexl);

    for(int i = 0; i <= 3; i++)
        cout << arr[i] << " ";


    return 0;
}