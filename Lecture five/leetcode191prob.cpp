#include <iostream>
using namespace std;

class Solution{
    public: 
        int bitCheck(int n){

            int count = 0;

            while (n)
            {
                int ch = n%2;

                if(ch&1){
                    count++;
                }

                n = n/2;
            }
            

        return count;
    }
};




int main(){
    Solution obj;

    int result = obj.bitCheck(2147483645);

    cout<<result;

    return 0;
}