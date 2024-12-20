#include<bits/stdc++.h>
using namespace std;

bool checkIsomorphic(string s, string t){
    int slen = s.length();
    int tlen = t.length();

    if(slen != tlen){
        return false;
    }

    map<char, char> s_map;
    map<char, char>t_map;

    for(int i=0; i<slen; i++){
        char schar = s[i];
        char tchar = t[i];

        if(s_map.find(schar) != s_map.end()){
            if(s_map[s[schar]] != tchar){
                return false;
            }
        }else{
            s_map[s[schar]] = tchar;
        }

        if(t_map.find(tchar) != t_map.end()){
            if(t_map[t[tchar]] != schar){
                return false;
            }
        }else{
            t_map[t[tchar]] = schar;
        }
    }

    return true;

}




int main(){

    string s = "foo";
    string t = "bar";
    cout << checkIsomorphic(s, t) << endl;


    return 0;
}