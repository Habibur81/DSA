#include<bits/stdc++.h>
using namespace std;

class abstruc{
    public:
        virtual int addNum(int num1, int num2) = 0;

        float addFloatNum(float num1, float num2){
            return num1 + num2;
        }

};

class abs : public abstruc{
    public:
        int addNum(int num1, int num2){
            return num1 + num2;
        }
};

int main(){


    return 0;
}