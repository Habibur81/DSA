#include<bits/stdc++.h>
using namespace std;

int main(){

    char myStr[20];
    int i;

    cout << "Enter string ";
    for( i = 0; i < 10; i++){
        cin >> myStr[i];
    }

    myStr[i] = '\0';

    // cout << "Enter string is " << myStr;

    cout << "Enter string is " ;
    for(i = 0; myStr[i] != '\0'; i++){
        cout << myStr[i];
    }
    cout << endl;

    int countVol = 0;

    for(i = 0; myStr[i] != '\0'; i++){
        char chechChar = myStr[i];
        if( tolower(chechChar) == 'a' || 
            tolower(chechChar) == 'e' || 
            tolower(chechChar) == 'i' ||
            tolower(chechChar) == 'o' ||
            tolower(chechChar) == 'u' 
        ){
            countVol++;
        }
    }

    cout << "Vowel count is = " << countVol << endl;

    int strlen = 0;

    for(i = 0; myStr[i] != '\0'; i++){
        strlen++;
    }
    cout << "String length is = " << strlen << endl;

    return 0;
}