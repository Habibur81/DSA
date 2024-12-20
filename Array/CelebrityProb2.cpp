#include<bits/stdc++.h>
using namespace std;

bool knows(vector<vector<int>> &mat, int a, int b, int n){
    if(mat[a][b] == 1){
        return true;
    }else{
        return false;
    }
}

int solveFuc(vector<vector<int>> &mat, int n){

    stack<int>stk;

    for(int i=0; i<n; i++){
        stk.push(i);
    }

    while(stk.size() > 1){
        int a = stk.top();
            stk.pop();
        int b = stk.top();
            stk.pop();

        if(knows(mat, a, b, n)){
            stk.push(b);
        }else{
            stk.push(a);
        }
    }

    int ans = stk.top();

    int rowCount = 0;
    for(int i=0; i<n; i++){
        if(mat[ans][i] == 0){
            rowCount++;
        }
    }

    int colCount = 0;
    for(int i=0; i<n; i++){
        if(mat[i][ans] == 1){
            colCount++;
        }
    }

    if(rowCount == n && colCount == n-1){
        return ans;
    }

    return -1;
}

int main(){
    vector<vector<int>>mat = {
        {0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1},
        {1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0},
        {1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1},
        {0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 0},
        {0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1},
        {1, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0},
        {1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1},
        {0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1},
        {0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0},
        {1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1},
        {1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0},
        {0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0}
    };

    int n = mat.size();
    cout << "Result = " << solveFuc(mat, n) << endl;

    return 0;
}