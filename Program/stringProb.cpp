#include<bits/stdc++.h>
using namespace std;

int main(){

    string my_str = "(]";
    stack<char>my_stack;

    for(char s : my_str){
        if(s == '(' || s == '{' || s == '['){
            my_stack.push(s);
        }else if(s == ')' || s == '}' || s == ']'){
            if(my_stack.empty()){
               cout << "false" << endl; 
            } 
            char top = my_stack.top();
            my_stack.pop();
            if((s==')' && top!='(') || (s=='}' && top!='{') || (s==']' && top!='[')){
                cout << "validation false" << endl;
            }
        }
    }

    if(my_stack.empty()){
        cout << "validation is correct!"<<endl;
    }

    return 0;
}