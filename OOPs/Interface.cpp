#include <iostream>
using namespace std;
class Shape{

        protected:
            int width;
            int height;
        public:
        void setWidth(int w){
            width = w;
        }

        void setHeight(int h){
            height = h;
        }

        virtual int getArea() = 0;

};

class Rectangle : public Shape{
    public:
        int getArea(){
            return (width * height);
        }
};

class Triangle : public Shape{
    public:
        int getArea(){
            return (width * height) / 2;
        }
};

int main(){

    Rectangle rec;
    Triangle tri;

    rec.setWidth(10);
    rec.setHeight(20);

    cout << "Recangle area = " << rec.getArea() << endl;

    tri.setWidth(10);
    tri.setHeight(20);

    cout << "Triangle area = " << tri.getArea() << endl;


    return 0;
}