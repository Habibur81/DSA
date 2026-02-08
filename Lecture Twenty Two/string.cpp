#include<iostream>
using namespace std;

int lenOfchar(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }

    return count;
}

int main(){
    char name[20];
    cout << "Enter your name:" <<endl;
    cin >> name;
    cout << "Your name is " << name <<endl;

    int length = lenOfchar(name);
    cout << "Name length is " << length << endl;

    return 0;
}