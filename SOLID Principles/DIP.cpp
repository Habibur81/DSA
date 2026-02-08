#include <bits/stdc++.h>
using namespace std;

class Database{
    public:
        virtual void connect() = 0;
};

class MySQLDatabase : public Database{
    public:
        void connect() override{
            cout << "MySQL Database" << endl;
        }
};

class OracalDatabase : public Database{
    public:
        void connect() override{
            cout << "Oracal Database" << endl;
        }
};

class Application : public Database{
    private:
        Database* db;
    public:
        Application(Database* dbbase) : db(dbbase){}
        void start() { db->connect();}
}


int main(){


    return 0;
}