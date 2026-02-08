#include <iostream>
using namespace std;

int main(){
    int start = INT8_MAX, end =  INT8_MAX;
    int mid1 = (start + end) / 2;

    cout << "Start Value = " << start << endl;
    cout << "End Value = " << end << endl;
    cout <<endl;
    cout << "Problem mid value = " << mid1 << endl;
    cout << endl;
    int mid2 = start + (end - start)/2;
    cout << "Solve mid value = " << mid2 << endl;

    return 0;
}