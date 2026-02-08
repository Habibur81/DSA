#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};
    int s = 6;

    vector< vector <int> > ans;
    int sum = 0;

      for(int i = 0; i < 5; i++){

         for(int j = i+1; j < 5; j++){
               sum = arr[i] + arr[j];
               if (sum == s) {
                 vector<int> temp;

                 temp.push_back(min(arr[i], arr[j]));
                 temp.push_back(max(arr[i], arr[j]));

                 ans.push_back(temp);
               }
         }
      }

      for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans.size(); j++){
            cout << ans[i][j] << " ";
        }
      }

    return 0;
}