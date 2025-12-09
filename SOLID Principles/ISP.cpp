#include <bits/stdc++.h>
using namespace std;
class Isprint{
    public:
        virtual void print() = 0; // pure virtual class
};

class Isscan{
    public:
        virtual void scan() = 0 // pure virtual class
};

class singlePrint : public Isprint{
    public:
        void print() override{
            cout << "Print Logic" << endl;
        }
};

class Multifunction : public Isprint, public Isscan{
    public:
        void print() override{
            //print logic
        }

        void scan() override{
              //scan logic
        }
};

int main(){



    return 0;
}