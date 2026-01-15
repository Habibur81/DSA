#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
        vector<int> container;
        int start;

        Queue(){
            start = 0;
        }

        void enqueue(int ele){
            
            if(container.size() == container.capacity()){
                cout << "Queue is full!" << endl;
            }


            container.push_back(ele);
        }

        void dequeue(){
            if(start == container.size()){
                cout << "Queue is empty!";
                return;
            }
            start++;
        }

        int front(){
            if(start == container.size()){
                cout << "Queue is empty!";
                return -1;
            }

            return container[start];
        }

        int back(){
            if(start == container.size()){
                cout << "Queue is empty!";
                return -1;
            }

            return container.back();
        }

        bool empty(){
            return start == container.size();
        }


};


int main(){
        vector<int>v;
        v = {1,2,3,4};

        cout << v.back() << endl;
        // v.pop_back();

        // for(int n : v){
        //     cout << n << endl;
        // }


    return 0;
}
