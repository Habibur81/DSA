#include<bits/stdc++.h>
using namespace std;
class AbsClass{
    private:
        int a, b;
    public:
        void set(int a, int b){
            this->a = a;
            this->b = b;
        }

        void display(){
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
        }
};

int main(){
    AbsClass obj;
    obj.set(10, 20);
    obj.display();

    return 0;
}