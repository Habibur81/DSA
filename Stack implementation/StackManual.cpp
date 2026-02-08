#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:

        int *arr;
        int s;
        int top;

        Stack(int size){
            this->s = size;
            arr = new int[s];
            top = -1;
        }

        ~Stack(){
            delete[] arr;
        }

        void push(int element){
            //s - top > 1  can use condition for push element;
            if( top < s - 1){
                top++;
                this->arr[top] = element;
            }else{
                cout << "Stack is overflow" << endl;
            }
            
        }

        void peek(){
            if(top >= 0){
                cout << arr[top] << endl;
            }else{
                cout << "Stack is Empty" << endl;
            }
            
        }    

        int pop(){
            if(top >= 0){
                top--;
            }else{
                cout << "Stack is underflow" << endl;
            }
        }

        int size(){
            if(top == -1){
                return 0;
            }else{
                return top + 1;
            }
        }

        bool empty(){
            if(top == -1){
                return true;
            }else{
                return false;
            }
        }

};


int main(){

    Stack* st = new Stack(5);

    cout << st->empty() << endl;

    delete st;

    return 0;
}