#include <iostream>
using namespace std;

class Solution{
    public: 
        int bitCheck(int n){

            string str;            

            while (n)
            {
                int ch = n%10;
                str += to_string(ch);
                n = n/10;
            }

           int rnum = stoi(str);
            

        return rnum;
    }
};




int main(){
    Solution obj;

    int result = obj.bitCheck(123);

    cout<<result;

    return 0;
}