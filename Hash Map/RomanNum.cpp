#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, char>my_map;
    my_map[1] = 'I'; 
    my_map[5] = 'V'; 
    my_map[10] = 'X'; 
    my_map[50] = 'L'; 
    my_map[100] = 'C'; 
    my_map[500] = 'D'; 
    my_map[1000] = 'M';

    int num = 1;
    int i = 0;

    cout << my_map[num] << endl;

    while(num < 1000 ){
        
        if(i%2 == 0){
            num = num * 5;
            cout << my_map[num] << endl;
        }else{
            num = num * 2;
            cout << my_map[num] << endl;
        }

        i++;
    }

    return 0;
}