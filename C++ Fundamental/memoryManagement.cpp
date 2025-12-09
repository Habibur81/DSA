#include <bits/stdc++.h>
using namespace std;

    // what is Memory management?
    //In c++, memory is mainly divided into:
    //1. Stack (Static) Memory
    //2. Heap (Dynamic) Memory
    
    // Both are important, but they are used differntly depending on how long you want your variables to live
    // and how flexiable the size needs to be.

    //1. Stack Memory (Static Allocation)
    // Key features:
    // Automatically managed by the compiler
    // Fast Allocation and Deallocation
    // Memory is reclaimed when a function exits
    // Limited size


    void func(){
        int x = 10;
    }

    // Here x is stored in stack memory, and it is automatically distroyed when the function ends.

    //2. Heap Memory (Dynamic Allocation)
    // Key Features
    // Manually managed using new / delete
    // Lives until explicitly deleted
    // Large size available
    // Slow than stack access

    void func(){
        int* x = new int(10); // stored in heap
        delete x; // manually free memory
    }

    // Here, the integer is created in heap memory using new, and stays until we use delete


// Comparison Table
Feature               Stack (Static)                                       Heap (Dynamic)
Allocation              At Compile time                                      At run time
Deallocation            Autocatic (No scope exit)                            Manual (delete) 
Speed                   Faster                                               slower
Lifetime of variable    Until Scope ends                                     Until manually freed
Syntax                  int a = 3;                                           int* x = new int(10);
Risk of memory leak     No                                                   Yes (If not deleted)

int main(){
    // Stack VS Heap

    int x = 10; // stack (Static)

    int* a = new int(20); // Heap (Dynamic)

    cout << "Stack: " << x << endl;
    cout << "Heap: " << a << endl;

    delete a;

    return 0;
}

