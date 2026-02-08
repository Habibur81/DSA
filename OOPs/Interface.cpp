#include <bits/stdc++.h>
using namespace std;

class Name{
    public:    
        virtual string getName() = 0;
};

class company : public Name{
    public:
        string getName(){
            return "DBI Research Private Limited";
        }
};

class post : public Name{
    public:
        string getName(){
            return "Data Analysis & Automation";
        }

};

int main(){
    company com;
    post p;

    cout << com.getName() << endl;
    cout << p.getName() << endl;

    return 0;
}