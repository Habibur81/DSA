#include <bits/stdc++.h>
using namespace std;

void dfsStack(int start, vector<vector<int>> &adj, vector<bool> & visited){
    stack<int> st;
    st.push(start);
    visited[start] = true;
    
    while(!st.empty()){
        int node = st.top();
        cout << node << " ";
        st.pop();
        for(auto it = adj[node].rbegin(); it != adj[node].rend(); it++){
            if(!visited[*it]){
                st.push(*it);
                visited[*it] = true;
            }
        }
    }
}

int main() {
    int n = 6;
    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);
    
    adj[0] = {1,2};
    adj[1] = {0,3,4};
    adj[2] = {0,4};
    adj[3] = {1,5};
    adj[4] = {1,2,5};
    adj[5] = {3,4};
    
    for(int i = 0; i < n; i++){
        for(int neighbor : adj[i]){
            cout << neighbor << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    dfsStack(0, adj, visited);

    return 0;
}