#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
        int arr[100];
        int start, end;

        Queue(){
            start = 0;
            end = 0;
        }


        void enqueue(int x){
            if(end == sizeof(arr)/sizeof(arr[0])){
                cout << "Queue is full!";
                return;
            }

            arr[end++] = x;
        }

        void dequeue(){
            if(start == end){
                cout << "Queue is Empty!";
                return;
            }
            start++;
        }

        int front(){
            if(start == end){
                cout << "Queue is Empty!";
                return -1;
            }

            return arr[start];
        }

        int back(){
            if(start == end){
                cout << "Queue is Empty!";
                return -1;
            }

            return arr[end-1];
        }


};



int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.front() << endl; // 10
    cout << q.back()  << endl; // 30

    q.dequeue();
    cout << q.front() << endl; // 20        
        
    //cout << "Hello World!" << endl;
    return 0;
}