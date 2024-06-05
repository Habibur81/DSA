#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    for(int i = 1; i <= 5; i++)
        v.push_back(i);

    cout << "Output of vector beging to end " << endl;
    for(auto i = v.begin(); i < v.end(); i++ )
        cout << *i << " ";
    
    cout << "\nOutput of cbegin and cend: " << endl; 
    for (auto i = v.cbegin(); i != v.cend(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of rbegin and rend: " << endl;
    for (auto ir = v.rbegin(); ir != v.rend(); ++ir) 
        cout << *ir << " "; 
  
    cout << "\nOutput of crbegin and crend : " << endl; 
    for (auto ir = v.crbegin(); ir != v.crend(); ++ir) 
        cout << *ir << " "; 

    cout << endl << endl;
    
    cout << "Size : " << v.size() << endl;
    cout << "\nCapacity : " << v.capacity() << endl;
    cout << "\nMax_Size : " << v.max_size() << endl;
  
    // resizes the vector size to 4 
    v.resize(4); 
  
    // prints the vector size after resize() 
    cout << "\nSize : " << v.size() << endl; 
  
    // checks if the vector is empty or not 
    if (v.empty() == false) 
        cout << "\nVector is not empty"; 
    else
        cout << "\nVector is empty"; 
  
    // Shrinks the vector 
    v.shrink_to_fit(); 
    cout << "\nVector elements are: "; 
    for (auto it = v.begin(); it != v.end(); it++) 
        cout << *it << " "; 

    vector<int> num {1, 2, 3, 4, 5};

    // declare iterator
    vector<int>::iterator iter;

    // use iterator with for loop
    for (iter = num.begin(); iter != num.end(); ++iter) {
        cout << *iter << "  ";
    }

    return 0;
}