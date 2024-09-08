#include <iostream>
using namespace std;

class Shape{
    protected:
        float num1;
    public: 
        float inputNum(){
            cin >> num1;
        }

        virtual float calculation() = 0;

};

class Square : public Shape{
    public:
        float calculation(){
            return num1 * num1;
        }
};

int main(){


    return 0;
}