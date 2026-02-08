#include<bits/stdc++.h>
using namespace std;
class Deque{
    private:
        int* arr;
        int f;
        int r;
        int s;
    public:
        Deque(int n){
            s = n;
            f = -1;
            r = -1;
            arr = new int[s];
            
        }
        void pushFront(int d){
            if((f == 0 && r == s - 1) || (f == r + 1)){
                cout << "Deque is full"<<endl;
                return;
            }else if(f == -1){
                f = 0;
                r = 0;
                arr[f] = d;
            }else if(f == 0){
                f = s - 1;
                arr[f] = d;
            }else{
                f = f - 1;
                arr[f] = d;
            }
        }
        void pushEnd(int d){
            if((f == 0 && r == s - 1) || (f == r + 1)){
                cout << "Deque is full"<<endl;
                return;
            }else if(f == -1){
                f = 0;
                r = 0;
                arr[r] = d;
            }else{
                r = (r+1)%s;
                arr[r] = d;
            }
            
        }
        void popFront(){
            if(f == r){
                f = r = -1;
                return;
            }else if(f == s - 1){
                f = 0;
            }else{
                f = f + 1;
            }
        }

        void popEnd(){
            if(r == f){
                f = r = -1;
                return;
            }else if(r == 0){
                r = s -1;
            }else{
                r = r - 1;
            }
        }

        int front(){
            if(f == -1 && r == -1){
                return -1;
            }
            return arr[f];
        }
        int back(){
            if(f == -1 && r == -1){
                return -1;
            }
            return arr[r];
        }

        ~Deque(){
            delete [] arr;
        }
};

int main(){
    Deque* dq = new Deque(5);

    dq->pushEnd(10);
    dq->pushEnd(20);
    dq->pushEnd(30);
    dq->pushFront(40);
    dq->pushFront(50);

    dq->popEnd();
    dq->popEnd();
    dq->popEnd();
    dq->popEnd();
    dq->popEnd();

    cout << dq->back() << endl;
    
    
    
    delete dq;

    return 0;
}