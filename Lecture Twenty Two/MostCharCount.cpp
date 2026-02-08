#include<iostream>
using namespace std;
#include <string>
#include <algorithm>
#include <cctype>

char getMaxoccCharac(string s){
    int arr[26]={0};

    for(int i = 0; i < s.size(); i++){
        char str = s[i];
        int num = 0;
        if(str >='a' && str <= 'z'){
            num = str - 'a';
            //cout << num <<endl;
        }else{
            num = str - 'A';
        }

        arr[num]++;

        
    }

    int m=-1, ans = 0;
    for(int i = 0; i < 26; i++){
        // cout << arr[i] << endl;
        //cout << arr[i] << endl;
        if(m < arr[i]){
            ans = i;
            //cout <<"ans " << ans <<endl;
            m = arr[i];
            //cout << "m " << m <<endl;
        }


    }
        
    char result = 'a'+ ans;

    return result;
    
}

int main(){

    string s;
    cout<<"Please Enter a string: ";

    cin>>s;
    // cout << s.size();
    

    cout << getMaxoccCharac(s) << endl;

    return 0;
}
