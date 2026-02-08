#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited){
    cout << node << " ";
    visited[node] = true;

    for(int neighbor : adj[node]){
        if(!visited[neighbor]){
            dfs(neighbor, adj, visited);
        }
    }
}

int main(){
    int n = 6;
    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);

    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 4};
    adj[3] = {1, 5};
    adj[4] = {1, 2, 5};
    adj[5] = {3, 4}; 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < adj[i].size(); j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;

    dfs(0, adj, visited);

    return 0;
}