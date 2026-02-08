#include <iostream>
using namespace std;

int* tripletsun(int arr[], int len, int s){
    static int res[100];
    int x = 0;
    int y = 1;
    int z = 2;

    for(int i = 0; i < len; i++){
        for(int j = i+1; j < len; j++){
            for(int k = j+1; k < len; k++){
                int sum = 0;
                sum = arr[i] + arr[j] + arr[k];
                //cout << sum << " ";

                if(sum == s){
                    res[x] = arr[i];
                    res[y] = arr[j];
                    res[z] = arr[k];
                    x++;
                    y++;
                    z++;
                    break;
                }
            }
            
        }
    
    }

    return res;
}

int main(){
    int a[5] = {1,4,3,2,5};
    int len = 5;
    int s = 11;
    int* result = tripletsun(a, len, s);

    for(int i = 0; i < 10; i++){
        if(result[i] > 0){
            cout << result[i] << " ";
        }else{
            break;
        }
    }

    return 0;
}