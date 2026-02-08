#include <bits/stdc++.h>
using namespace std;
bool RedundentBrac(string s){
    stack<char>my_stk;

    for(int i=0; i<s.length(); i++){
        char ch = s[i];

        if(ch=='c' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            my_stk.push(ch);
        }else {
            if(ch == ')'){
                bool checkRedun = true;

                while(my_stk.top() != '('){
                    char check = my_stk.top();
                    if(check == '+' || check == '-' || check == '*' || check == '/'){
                        checkRedun = false;
                    }
                    my_stk.pop();
                }

                if(checkRedun == true) {
                    return true;
                }

                my_stk.pop();
            }  
        }        
    }

    return false;
}

int main(){

    string s = "(a+b)";

    cout << RedundentBrac(s) << endl;

    return 0;
}