#include <iostream>
using namespace std;

class A {
    public:
    void showA(){cout <<"A"; }
};

class B : virtual public A {
    public:
    void showB(){cout <<"B"; }
};

class C : virtual public A {
    public:
    void showC(){cout <<"C"; }
};
//Here B and C inherite A. showA() method has in B and C
// But D inherite B and C so D object can't call showA() this problem is 
// called diamond problem. this problem solve is virtual keyword.  
class D : public B, public C {
    public:
    void showD(){cout <<"D"; }
};


int main(){
    D obj;
    obj.showA();
    // D object can't call showA(). this problem is called ambiguity problem
    // solve this problem virtual keyword.
    return 0;
}

// class Animal {
// public:
//     void speak() { std::cout << "Animal speaks\n"; }
// };

// class Dog : virtual public Animal {
// public:
//     void bark() { std::cout << "Dog barks\n"; }
// };

// class Cat : virtual public Animal {
// public:
//     void meow() { std::cout << "Cat meows\n"; }
// };

// class Husky : public Dog, public Cat {
// public:
//     void howl() { std::cout << "Husky howls\n"; }
// };

// int main() {
//     Husky husky;
//     husky.speak(); // Calls Animal::speak()
//     husky.bark();
//     husky.meow();
//     husky.howl();
//     return 0;
// }