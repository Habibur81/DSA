#include <iostream>
using namespace std;

class parent{
    private:
        int age;
    protected:
        int property;
    public:
        string name;


};

class child1 : public parent{
    //age is not by accessing child object
    // property is accessed but type protected
    // name  is accessed and type public
};

class child2 : private parent{
    //age is not by accessing child object
    // property is accessed but type here private
    // name  is accessed but type here private
};

class child3 : protected parent{
    //age is not by accessing child object
    // property is accessed but type here protected
    // name  is accessed but type here protected
};

int main(){
    child1 obj1;
    child2 obj2;
    child3 obj3;
    //obj3.age;

    return 0;
}