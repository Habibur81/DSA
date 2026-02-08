#include<bits/stdc++.h>
using namespace std;

class Queue{
    private:

        int f = -1;
        int r = -1;
        int* arr;
        int size;

    public:

        Queue(int s){
            size = s;
            arr = new int[size];
        }

        void push(int d){
            
            if((r+1)%size == f){
                cout << "Queue is full"<<endl;
                return;
            }

            if(f == -1){
                f = 0;
            }

            r = (r+1)%size;

            arr[r] = d;
        }

        void pop(){

            if(f == -1){
                cout << "Queue is empty" <<endl;
                return;
            }

            if(r == f){
                r = f = -1;
            }
            
            f = (f+1)%size;
        }

        int front(){

            if(f == -1){
                return -1;
            }

            return arr[f]; 
        }

};

int main(){

    Queue* q = new Queue(5);

    q->push(1);
    q->push(2);
    q->push(3);
    q->push(4);
    q->push(5);
    q->pop();
    q->push(6);
    q->pop();
    q->pop();
    q->pop();
    q->pop();
    cout << q->front() << endl;

    return 0;
}