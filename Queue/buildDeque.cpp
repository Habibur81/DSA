#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;

    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);

    cout << dq.front() << endl;
    cout << dq.back() << endl;


    return 0;
}