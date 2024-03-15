#include <iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i=0; i<n; i++){

        cout<<"First loop is "<<i<<endl;

        for(int j=0; j<n; j++){

            cout<<"Second loop is "<<j<<endl;

            for(int j=0; j<n; j++){
                cout<<"Third loop is "<<j<<endl;
            }

            cout<<"\n";
        }

        cout<<"\n";
    }
}
// time complexity is O(n3)