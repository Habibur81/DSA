#include<bits/stdc++.h>
using namespace std;

class Stack{

    public:

    vector<int> st;
    int tp;

    Stack(){
        tp = -1;
    }

    void push(int x){
        st.push_back(x);
        tp++;
    }

    void pop(){
        if(tp == -1){
            cout << "Stack is underflow!!!!" << endl;
            return;
        }
        st.pop_back();
        tp--;
    }

    int top(){
        if(tp == -1){
            cout << "Stack is empty!!!!" << endl;
            return -1;
        }

        return st[tp];
    }

    bool empty() {
        return tp == -1;
    }

};


int main(){

    Stack obj;
    obj.push(10);
    obj.push(20);
    obj.pop();
    cout << obj.top() << endl;

    return 0;
}