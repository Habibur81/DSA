#include <bits/stdc++.h>
using namespace std;

int main(){
    // 1 3 3 1
    int numRows = 3;
    int nums[numRows][numRows];

    for(int line=0; line <= numRows; line++){
        for(int i=0; i<=line; i++){
            if(line==i || i==0){
                nums[line][i] = 1;
            }else{
                nums[line][i] = nums[line-1][i-1] + nums[line-1][i];
                cout << nums[line][i] << endl;
            }
        }
    }


    // for(int i=0; i < len; i++){
    //     for(int j=0; j<i+1; j++){
    //         nums[j][i] = 0;
    //     }        
    // }

    //vector<vector<int>> ans;

    // for (int i = 0; i < numRows; ++i)
    //    ans.push_back(vector<int>(i + 1, 1));
    


    // for(int i=0; i < len; i++){
    //     nums[i][i] = 1;
    //     for(int j=i; j>0; j--){
    //         nums[i][j] = nums[i][j] + nums[i][j+1];
    //     }    
    // }
    


    //int i = len - 2;

    // while(i >= 0){
    //     for(int j=i; j < len - 1; j++){
           
    //         nums[j] = nums[j] + nums[j+1];
    //     }

    //     i--;
    // }

    
    // for(int i=0; i<len; i++){
    //     cout << nums[i] <<" ";
    // }

    return 0;
}