#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 10;
    vector<bool>prime(n+1, true);
    int count = 0;

    for(int i = 2; i*i < 10; i++){
        if(prime[i]){
            for(int j = i*i; j < n; j++){
                cout << j << endl;
                prime[j] = false;
            }
        }
    }


    for(int i = 0; i < prime.size(); i++){
        count++;
        cout << prime[i] << endl;

    }

    cout << count << endl;

    return 0;
}