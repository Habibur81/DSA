#include <bits/stdc++.h>
using namespace std;

int main(){
    //abcbb
    string str = "pwwkew";
    int f = 0;
    int b = 0;
    int result = -1;
    unordered_map<char, int>my_map;
    

    while(f < str.size()){

        auto it = my_map.find(str[f]);

        if(it != my_map.end() && it->second >= b){
            b = it->second + 1;
        }else {
            result = max(result, f-b+1);
        }

        my_map[str[f]] = f;
        f++;
        
    }

    //    cout << result;

    //    set<char>my_set;
    //    for(int i=0; i<str.size(); i++){
    //     my_set.insert(str[i]);
    //    }

    
    //    for(auto &cha : my_set){
    //     cout << cha << endl;
    //    }

    //    cout << my_set.size() << endl;   

    return 0;
}