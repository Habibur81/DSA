#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int l = columnTitle.size() - 1;
        int result=0;
        
        for(int i = 0; l >= 0; i++){
            result += (columnTitle[l--] - 'A' + 1) * pow(26, i);
        }

        return  result;
    }
};


int main(){
    Solution obj;
    cout << obj.titleToNumber("AB") << endl;
    
    return 0;
}