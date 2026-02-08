#include<bits/stdc++.h>
using namespace std;

vector<int>nextSmallNum(vector<int>&arr, int len){
    stack<int>stk;
    stk.push(-1);
    vector<int>res(len);
    for(int i=len - 1; i>=0; i--){
        int currEle = arr[i];
        while(stk.top() != -1 && currEle <= arr[stk.top()]){
            stk.pop();
        }
        res[i] = stk.top(); 
        stk.push(i);
    }

    return res;
}

vector<int>prevSmallNum(vector<int>&arr, int len){
    stack<int>stk;
    stk.push(-1);
    vector<int>res(len);
    for(int i=0; i<len; i++){
        int currEle = arr[i];
        while(stk.top() != -1 && currEle <= arr[stk.top()]){
            stk.pop();
        }
        res[i] = stk.top(); 
        stk.push(i);
    }

    return res;
}

int main(){

    vector<int>heights = {2,1,5,6,2,3};
    int len = heights.size();

    vector<int>prev;
    vector<int>next;

    next = nextSmallNum(heights, len);
    prev = prevSmallNum(heights, len);
    
    int maxArea = INT_MIN;

    for(int i=0; i<len; i++){

        if(next[i] == -1){
            next[i] = len;
        }

        int h = heights[i];
        int w = next[i] - prev[i] - 1;
        int newArea = h*w;

        maxArea = max(maxArea, newArea);
    }

    cout << maxArea << endl;

    return 0;
}