#include <bits/stdc++.h>
using namespace std;

int main(){

    set<int> mySet;

    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(40);
    mySet.insert(10);
    mySet.insert(60);

    cout << "Size of set " << mySet.size() << endl;

    for(int num : mySet){
        cout <<"Set element " << num << " ";
    }


    if(mySet.find(2) != mySet.end()){
        cout << "Find the element in the set " << endl;
    }else{
        cout << "Not find the element in the set " << endl;
    }


    return 0;
}