#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> fl ;
    fl = {3, 8, 10, 11, 30};
    list<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    // for(int vowel : vowels){
    //     cout << vowel << " ";
    // }cout << endl;

    for(auto it = vowels.begin(); it !=  vowels.end(); it++){
        cout << *it << " ";
    }cout << endl;

    for(int el : fl){
        cout << el << " ";
    }

    return 0;
}