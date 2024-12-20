#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

class Stack{
    private:
        int min = INT_MAX;
        stack<int> s;
    public:
        void push(int data){
            if(s.empty()){
                s.push(data);
                min = data;
            }else{
                if(min > data){
                    s.push(2*data - min);
                    min = data;
                }else{
                    s.push(data);
                }
            }
        }

        int pop(){
            if(s.empty()){
                return -1;
            }
            int curr = s.top();
            s.pop();
            if(curr > min){
                return curr;
            }else{
                int preMin = min;
                min = 2*min - curr;
                return preMin;
            }
        }

        int top(){
            if(s.empty()){
                return -1;
            }

            int curr = s.top();
            if(curr > min){
                return curr;
            }else{
                return min;
            }
        }

        bool isEmpty(){
            return s.empty();
        }

        int getMin(){
            if(s.empty())
                return -1;
            return min;
        }
};



int main(){
   
    Stack* obj = new Stack();
    obj->push(5);
    obj->push(3);
    obj->push(8);
    obj->push(2);
    obj->push(4);

    obj->pop();

    cout << obj->getMin() << endl;

    return 0;
}