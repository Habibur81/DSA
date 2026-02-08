#include <iostream>
using namespace std;

int firstSum(int nums[], int m){
            int sum = 0;
            for(int i = 0; i < m; i++){
                sum = sum + nums[i];
            }

            return sum;
        } 
int secondSum(int nums[], int m){
            int len = 6;
            int sum = 0;
            for(int i = m+1; i < len; i++){
                sum = sum + nums[i];
            }

            return sum;
        }

int main(){
            int s = 0;
            int nums[6] = {1,7,3,6,5,6};
            int e =  6 - 1;
            int m = s + (e - s) / 2;

            int sum1 = firstSum(nums, m);
            int sum2 = secondSum(nums, m);

            while(s < e){ 
                               
                if(sum1 == sum2){
                    cout << m <<endl;
                }else if(sum1 > sum2){
                    m = m - 1;
                    sum1 = firstSum(nums, m);
                    sum2 = secondSum(nums, m);
                }else if(sum1 < sum2){
                    m = m + 1;
                    sum1 = firstSum(nums, m);
                    sum2 = secondSum(nums, m);
                }else if(m == 5){
                    cout << 0 << endl;
                }else if(m == 0){
                   cout << -1 << endl;
                }
                
                s++;
                e--;
            }

            //cout << sum1 << " " << sum2 <<endl;

            return 0;
}