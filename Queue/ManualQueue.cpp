#include <bits/stdc++.h>
using namespace std;

class Queue{

    int* arr;
    int s;
    int f;
    int b;
    int e = -1;

    public:
        Queue(int size){
            arr = new int[size];
            s = size;
            f = 0;
            b = -1;
        }

        void push(int ele){
            if(b < s - 1){
                arr[++b] = ele;
                e++;
            }else{
                cout << "Queue is overflow" << endl;
            }
        }

        int front(){
            if(f <= b){
                int fnt = arr[f];
                return fnt;
            }else{
                return -1;
            }           
        }

        int size(){
            int size = b - f + 1;
            return size;
        }

        int back(){
            if(f <= b){
                int bk = arr[b];
                return bk;
            }else{
                return -1;
            }            
        }

        void pop(){
            if(f <= b){
                f++;
                e--;
            }else{
                cout << "Queue is underflow" << endl;
            }
        }

        bool empty(){
            if(e == -1){
                return true;
            }else{
                return false;
            }
        }

        ~Queue(){
            delete[] arr;
        }
};


int main(){

    // Queue* qu = new Queue(6); 
    Queue qu(6);

    

    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    qu.push(60); 

    cout << qu.front() << endl;
    qu.pop();

    cout << qu.front() << endl;
    qu.pop();

    cout << qu.front() << endl;
    qu.pop();

    cout << qu.front() << endl;
    qu.pop();

    cout << qu.front() << endl;
    qu.pop();
    

    cout << qu.front() << endl;
    qu.pop();

    
    

    // cout << qu.empty() << endl;

    

    //delete qu;

    return 0;
}