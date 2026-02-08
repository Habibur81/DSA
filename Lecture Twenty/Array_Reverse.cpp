#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {4, 2, 3, 1};

    int i = 0;
    int len = arr.size();

    while (i < len)
    {
        //cout << arr[i] << " ";
        int tem = arr[i];
        arr[i] = arr[len - 1];
        arr[len - 1] = tem;
        i++;
        len--;
    }

    int j = 0;
    int len1 = arr.size();

    while (j < len1)
    {
        cout << arr[j] << " ";
        // int tem = arr[i];
        // arr[i] = arr[len - 1];
        // arr[len - 1] = tem;
        j++;
        // len--;
    }
    


    return 0;
}