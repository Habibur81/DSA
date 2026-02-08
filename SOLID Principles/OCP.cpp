#include <bits/stdc++.h>
using namespace std;
// Class should be open for extension and close for modification.
// Open Close Principle er jon Abstraction use korte hoy
class Shape{
    public:
        virtual double area() = 0; // pure virtual class
}; // class closed for modificating

class Circle : public Shape{
    private:
        double radius;
    public:
        Circle(double ra) : radius(ra){};
        double area() override{
            return 3.1416 * radius * radius;
        };
}; // class open for extending

int main(){

    Circle obj(10);
    double area = obj.area();
    cout << area << endl;

    return 0;
}
