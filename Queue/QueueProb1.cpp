#include<bits/stdc++.h>
using namespace std;

class Queue{
    int* arr;
    int b;
    int f;
    int s;

    public:
        Queue(){
            arr = new int[100];
            b = -1;
            f = 0;
            s = 100;
        }
        void push(int x){
            if(b < s - 1){
                arr[++b] = x;
            }
        }
        int pop(){
            if(f <= b){
                int ans = arr[f++];
                return ans;
            }
            return -1;
        }
        int peek(){
            if(f <= b){
                int ans = arr[f];
                return ans;
            }
            return -1;
        }
        bool empty(){
            if(f > b){
                return true;
            }
            return false;
        }

        ~Queue(){
            delete[] arr;
        }
}; 

int main(){
    Queue* obj = new Queue();

    //cout << obj->empty() << endl;
    obj->push(10);
    //cout << obj->empty() << endl;

    cout << "Before pop = " << obj->peek() << endl;
    obj->pop();
    cout << "After pop = " << obj->peek() << endl;

    delete obj;

    return 0;
}