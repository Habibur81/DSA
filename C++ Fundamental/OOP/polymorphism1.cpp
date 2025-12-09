#include <bits/stdc++.h>
using namespace std;

class Sound{
    public:
        virtual void SoundOfAnimal(){
            cout << "Anima Sound is not found ";
        }
};

class Dog : public Sound{
    public:
        virtual void SoundOfAnimal(){
            cout << "Anima Sound is not found ";
        }
}


int main(){


    return 0;
}