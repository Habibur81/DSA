#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    
    for(int num : numbers){
        cout << "Number is " << num << endl;
    }
    
    cout << endl;
    
    numbers[1] = 17;
    
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i]%2 == 0){
            cout << "Number is " << numbers[i] << endl;
        }
    }
    
    cout << endl;
    
    numbers.clear();
    
    cout << "after clear the size of vector " << numbers.size() << endl;

    return 0;
}