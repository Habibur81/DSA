#include<iostream>
#include<vector>
using namespace std;

void mergefun(vector<int> v1, vector<int> v2, vector<int> v3){
    

    int len1 = v1.size();
    int len2 = v2.size();

    int i = 0, j = 0;

    while(i < len1 && j < len2){
        if(v1[i] < v2[j]){
            v3.push_back(v1[i]);
            i++;
        }else{
             v3.push_back(v2[j]);
             j++;
        }
    }

    

    while(i < len1){
        v3.push_back(v1[i]);
        i++;
    }

    while(j < len2){
        v3.push_back(v2[j]);
        j++;
    }

   
}
void printfun(vector<int> v3){
    for(int k = 0; k < v3.size(); k++){
        cout << v3[k] << " ";
    }
}


int main(){
    vector<int> v1 = {1, 3, 5, 7};
    vector<int> v2 = {2, 4, 6};
    vector<int> v3;

    mergefun(v1, v2, v3);

    printfun(v3);


    return 0;
}