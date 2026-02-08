#include<bits/stdc++.h>
using namespace std;

int solveFun(string haystack, string needle){
    int h_size = haystack.size();
    int n_size = needle.size();

    if(n_size == 0) return 0;

    for(int i=0; i<h_size; i++){
        if(haystack.substr(i, n_size) == needle){
            return i;
        }
    }

    return -1;
}

int main(){
    string haystack = "mississippi";
    string needle = "issip";
    // int h_size = haystack.size();
    // int n_size = needle.size(); 

    // int ans = solveFun(haystack, needle);

    // cout << ans << endl;

    
    // size_t found = haystack.find(needle);

    // if(found != string::npos){
    //     cout << found << endl;
    // }else{
    //     cout << "not found" << endl;
    // }

    char c = 'A';
    int assCII = c;
    cout << assCII << endl;
    

    return 0;
}