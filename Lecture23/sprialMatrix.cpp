#include <iostream>
using namespace std;
#include <vector>

int main(){

    // vector<int> spiralOrder(vector<vector<int>>& matrix) = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


        // int rows = matrix.size();
        // int cols = matrix[0].size();

        // int startingRow = 0, endingRow = rows - 1;
        // int startingCol = 0, endingCol = cols - 1;

        // int total = rows * cols;
        // int count = 0;

        // vector <int> ans;
        
        // while (count < total)
        // {
        //     for(int i = startingCol; count < total && i <= endingCol; i++){
        //         ans.push_back(matrix[startingRow][i]);
        //         count++;
        //     }
        //     startingRow++;

        //     for(int i = startingRow; count < total && i <= endingRow; i++){
        //         ans.push_back(matrix[i][endingCol]);
        //         count++;          
        //     }
        //     endingCol--;

        //     for(int i = endingCol; count < total && i >= startingCol; i--){
        //         ans.push_back(matrix[endingRow][i]);
        //         count++;
        //     }
        //     endingRow--;

        //     for(int i = endingRow; count < total && i >= startingRow; i--){
        //         ans.push_back(matrix[i][startingCol]);
        //         count++;
        //     }
        //     startingCol++;
        // }

        // for(int i = 0; i < ans.size(); i++){
        //     cout << ans[i] << " ";
        // }
        int rows = matrix.size();
        int cols = matrix[0].size();
        int startingcol = 0;
        int startingRow = 0;

        int endingRow = rows - 1;
        int endingCol = cols - 1;

        vector <int> ans;

        for(int i = startingcol; i <= endingCol; i++){
            for(int j = endingRow; j >= startingRow; j--){
               // ans.push_back(matrix[j][i]);
               cout << matrix[j][i] << " ";
            }
            cout << endl;
        }
            

        

    return 0;
}