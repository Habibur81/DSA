#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "({[]})";
    stack<char>my_stack;

    for(char c : str){
        if(c=='(' || c=='{' || c=='['){
            my_stack.push(c);
        }
        else{

            if(my_stack.empty()){
                cout << "false" << endl;
                break;
            }

            char top = my_stack.top();
            my_stack.pop();

            if((c==')' && top!='(') || (c=='}' && top!='{') || (c==']' && top!='[')){
                cout << "false" << endl;
                break;
            }  
        }
    }

    if(!my_stack.empty()){
        cout << "false" << endl;
    }

    if(my_stack.empty()){
        cout << "true" << endl;
    }

    return 0;
}