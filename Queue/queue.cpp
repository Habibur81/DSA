#include<bits/stdc++.h>
using namespace std;

class Queue{

    private:
        int f = -1;
        int r = -1;
        int size;
        int* arr;

    public:

        Queue(int n){
            size = n;
            arr = new int[size];
            f = 0;
            r = 0;
        }

        void push(int e){
            
            if(r == size){
                cout << "Queue is full " << e << " not insert in queue" << endl;
                return;
            }

            arr[r] = e;
            r++;
        }

        void pop(){
            if(r == f){
                cout << "Queue is Empty" << endl;
                return;
            }
            f++;
            
        }

        int front(){
            if(r == f){
              return -1; 
            }
            return arr[f];
        }

        bool empty(){
            if(r == f){
                return true;
            }else{
                return false;
            }
        }

        ~Queue(){
            delete [] arr;
        }
};

int main(){
    Queue* q = new Queue(2);

    q->push(10);
    q->push(20);

    q->pop();
    q->pop();
    cout << q->front() << endl;

    delete q;

    return 0;
}