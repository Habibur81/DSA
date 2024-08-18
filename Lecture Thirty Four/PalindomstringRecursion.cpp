#include <iostream>
using namespace std;
bool CheckPalindrom(string str, int s, int e){
    if(s == e){
        return true;
    }

    if(str[s] == str[e]){
        CheckPalindrom(str, s+1, e-1);
    }else{
        return false;
    }

}

int main(){
    string str = "python";

    bool ans = CheckPalindrom(str, 0, str.length() - 1);

    if(ans){
        cout << "Palindrom String" << endl;
    }else{
        cout << "Not Palindrom String" << endl;
    }

    return 0;
}