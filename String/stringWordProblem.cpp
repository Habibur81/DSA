#include<bits/stdc++.h>
using namespace std;

int main(){
    //string  s = "  hello world  ";
    //approah 1
    // int i = 0;
    // int n = s.length();
    // string result;
    
    // while(i < n){
    //     while(i < n && s[i] == ' ') i++;
    //     if(i > n) break;

    //     int j = i + 1;

    //     while(j < n && s[j] != ' ') j++;

    //     string sub = s.substr(i, j-i);

    //     if(result == " "){
    //         result = sub;
    //     }else{
    //         result = sub + " " + result;
    //     }

    //     i = j + 1;
    // }
        
    // cout << result << endl;

    string  s = "the sky is blue";
    string result = "";
    vector<string> word;

    stringstream ss (s);

    string temp;

    while(ss >> temp){
        word.push_back(temp);
    }

    for(int i = word.size() - 1; i>=0; i--){
        if(result.length() > 0){
            result = result + " " + word[i];
            
        }else{
           result = word[i]; 
        }
    }

    cout << result << endl;

}