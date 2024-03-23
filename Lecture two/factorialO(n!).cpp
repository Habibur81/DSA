#include <iostream>
using namespace std;
void fact(int n)
{
    if(n == 0){
        cout<<"*******"<<endl;
    }

    for(int i=0; i<n; i++){
        fact(n-1);
    }

    //n=3 loop continue 0, 1, 2 fact(3-1) fact(3-1) fact(3-1)

    //n=2 fact(2) 0, 1 fact(2-1) fact(2-1)
        //n=1 fact(1) 0, fact(1-1)
            //n=0 fact(0)
        //n=1 fact(1) 0, fact(1-1)
            //n=0 fact(0)
    //n=2 fact(2) 0, 1 fact(2-1) fact(2-1)
        //n=1 fact(1) 0, fact(1-1)
            //n=0 fact(0)
        //n=1 fact(1) 0, fact(1-1)
            //n=0 fact(0)
    //n=2 fact(2) 0, 1 fact(2-1) fact(2-1)
        //n=1 fact(1) 0, fact(1-1)
            //n=0 fact(0)
        //n=1 fact(1) 0, fact(1-1)
            //n=0 fact(0)
    
}

int main()
{

    int n = 3;
    fact(n);

    return 0;
}