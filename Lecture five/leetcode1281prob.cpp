#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sub = 1;
        int sum = 0;
        int diff = 0;

        while(n > 0){
            sub = sub * (n%10);
            sum = sum + (n%10);
            n = n/10;
        }

        diff = sub - sum;

        return diff;
    }
};

int main(){
    Solution obj;
    int result = obj.subtractProductAndSum(3432);
    cout<<result;

    return 0 ;
}