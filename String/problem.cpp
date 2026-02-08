#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<int, char> my_map;
    string ans = "";
    string convertToTitle(int columnNumber) {   
        
        while(columnNumber > 0){
            columnNumber--;
            int rem = columnNumber%26;
            ans.push_back('A' + rem);
            
            columnNumber = columnNumber/26;
        }

        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};


int main(){
    Solution obj;
    cout << obj.convertToTitle(2147483647) << endl;
    
    return 0;
}