#include <bits/stdc++.h>
using namespace std;

int main(){
    stack <int>stk;
    stack<int>temp;
    //1 2 3 4 
    for(int i=1; i<=4; i++){
        stk.push(i);
    }
    int n = stk.size() - 1;
    int mid = n / 2;

    for(int i=0; i<=mid; i++){
        if(i == mid){
            stk.pop();
        }else{
           temp.push(stk.top());
           stk.pop();
        }
    }

    for(int i=0; i<=temp.size(); i++){
        stk.push(temp.top());
        temp.pop();
    }

    while(!stk.empty()){
        cout << stk.top() << endl;
        stk.pop();
    }

    


    return 0;
}