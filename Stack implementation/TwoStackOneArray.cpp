#include<bits/stdc++.h>
using namespace std;

class twoStacks {
  public:
        int* arr;
        int top1;
        int top2;
        int size;
    
  public:
        twoStacks(int s) {
            size = s;
            arr = new int[s];
            top1 = -1;
            top2 = size;
        }

        // Function to push an integer into the stack1.
        void push1(int x) {
            if(top2 - top1 > 1){
                top1++;
                arr[top1] = x;
            }
        }

        // Function to push an integer into the stack2.
        void push2(int x) {
            if(top2 - top1 > 1){
                top2--;
                arr[top2] = x;
            }
        }

        // Function to remove an element from top of the stack1.
        int pop1() {
            if(top1 >= 0){
                int ans = arr[top1--];
                return ans;
            }else{
                return -1;
            }
        }

        // Function to remove an element from top of the stack2.
        int pop2() {
            if(top2 < size){
                int ans = arr[top2++];
                return ans;
            }else{
                return -1;
            }
        }

        ~twoStacks(){
            delete[] arr;
        }
};

int main(){
    twoStacks* st = new twoStacks(6);
    
    // st->push1(10);
    // st->push1(30);
    // st->push1(70);

    // cout << "Pop from pop1 = " << st->pop1() << endl;
    // cout << "Pop from pop1 = " << st->pop1() << endl;
    // cout << "Pop from pop1 = " << st->pop1() << endl;
    // cout << "Pop from pop1 = " << st->pop1() << endl;

    // st->push2(90);
    // st->push2(20);
    // st->push2(40);

    //cout << "Pop from pop2 = " << st->pop2() << endl;
    //cout << "Pop from pop2 = " << st->pop2() << endl;
    //cout << "Pop from pop2 = " << st->pop2() << endl;
    //cout << "Pop from push2 = " << st->pop2() << endl;

    return 0;
}