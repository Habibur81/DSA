#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr1 = {3, 6, 9, 0, 0};
    vector<int>arr2 = {4, 10};
    vector<int>arr3;
    int m = arr1.size();
    int n = arr2.size();
    int i = 0;
	int j = 0;
	int k = 0;

	while(i < m && j < n){
		if(arr1[i] < arr2[j]){
			if(arr1[i] == 0){
				i++;
			}else{
				// arr3.at(k) =  arr1[i++];
                // k++;
               // k++;
                arr3.push_back(arr1[i++]);
			}
			
		}else{
			if(arr2[j] == 0){
				j++;
			}else{
				// arr3.at(k) = arr2[j++];
                // k++;
                arr3.push_back(arr2[j++]);
			}
			
		}
	}

	while(i < m){
		if(arr1[i] == 0){
			i++;
		}else{
			// arr3.at(k) = arr1[i++];
            // k++;
            arr3.push_back(arr1[i++]);
		}
	}

	while(j < n){
		if(arr2[j] == 0){
			j++;
		}else{
			// arr3.at(k) = arr2[j++];
            // k++;
             arr3.push_back(arr2[j++]);
		}
	}

    for(int l = 0; l < arr3.size(); l++){
        cout << arr3[l] << " ";
    }
    cout << endl;

	return 0;

}