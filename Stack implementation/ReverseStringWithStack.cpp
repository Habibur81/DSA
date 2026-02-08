#include <bits/stdc++.h>
using namespace std;

int main(){

    stack<char>my_stack;
    string str = "habibur";
    string ans="";

    for(int i=0; i<str.size(); i++){
        my_stack.push(str[i]);
    }

    while(!my_stack.empty()){
        ans.push_back(my_stack.top());
        my_stack.pop();
    }

    cout << ans << endl;
    
    return 0;
}