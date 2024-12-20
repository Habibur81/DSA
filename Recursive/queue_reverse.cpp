#include <bits/stdc++.h>
using namespace std;

void qrev(queue<int> & q){
    if(q.empty()){
        return;
    }

    int val = q.front();
    q.pop();

    qrev(q);
    q.push(val);
}


int main(){

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    qrev(q);

    cout << q.front() << endl;

    return 0;
}