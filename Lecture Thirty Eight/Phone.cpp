#include <iostream>
#include <vector>
using namespace std;

void solve(string digits, string mapping[], string output, int index, vector<string>& ans){

    if(index >= digits.length()){
        ans.push_back(output);
        //cout << ans[1] << endl;
        return;
    }

    int num = digits[index] - '0';
    string value = mapping[num];

    for(int i = 0; i < value.length(); i++){
        output.push_back(value[i]);
        //cout << output << endl;
        solve(digits, mapping, output, index + 1, ans);
        output.pop_back();
    }


}

int main(){

    string digits = "23";
    vector<string> ans;
    int index = 0;
    string output;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};


    solve(digits, mapping, output, index, ans);
    cout << ans.size() << endl;

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    } 
    //cout << endl;

    return 0;
}