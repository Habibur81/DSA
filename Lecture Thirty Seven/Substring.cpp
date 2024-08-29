#include <iostream>
#include <vector>
using namespace std;


void solve(string str,  string currStr, int index){

    if(index == str.length()){

        if(currStr.length() >= 0){
            cout << "{";
            for(char s : currStr) cout << s ;
            cout <<"}" << endl; 
        }        

        return;
    }

    //exclude
    solve(str, currStr,  index + 1);

    //include
    currStr.push_back(str[index]);
    solve(str, currStr,  index + 1);

}

int main(){

    string str = "abc";
    int index = 0;
   string currStr = "";


    solve(str, currStr, index);


    return 0;
}