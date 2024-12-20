#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[20];
    int i, j=0, count = 0, len = 0;

    cout << "Enter string ";
    gets(str);

    for(int i=0; str[i] != '\0'; i++){
        if(toupper(str[i])=='A' || toupper(str[i])=='E' || toupper(str[i])=='O' || 
        toupper(str[i])=='U' || toupper(str[i])=='I'){
            count++;
        }
    }

    while(str[j] != '\0'){
        len++;
        j++;
    }

    cout << "this string " << str << " vowel is " << count << endl;
    cout << "string length is " << len << endl;
    return 0;
}