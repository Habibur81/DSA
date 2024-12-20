#include <iostream>
using namespace std;

int main(){

    int arr[5] = {0, 2, 1, 2, 0};

    int CntOne=0;
        int CntTwo=0;
        int Cntthree=0;
        int k = 0;
        
        int len = 5;
        
        for(int i=0; i<len; i++){
            if(arr[i] == 0){
                CntOne++;
            }else if(arr[i] == 1){
                CntTwo++;
            }else if(arr[i] == 2){
                Cntthree++;
            }
        }
        
        while(CntOne>0){
            arr[k]=0;
            CntOne--;
            k++;
        }
        
        while(CntTwo>0){
            arr[k]=1;
            CntTwo--;
            k++;
        }
        
        while(Cntthree>0){
            arr[k]=2;
            Cntthree--;
            k++;
        }

        for(int i=0; i<len; i++){
            cout << arr[i] << " ";
        }
        cout << endl;

}