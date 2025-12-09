#include <bits/stdc++.h>
using namespace std;
class Graph{
  public:
    unordered_map<int, list<int> > adj;
    
    void node(int u, int v, bool dir){
        adj[u].push_back(v);
        if(dir == false){
            adj[v].push_back(u);
        }
    }
    
    void print(){
        for(auto pair : adj){
            cout << pair.first << "->[";
            bool flag = true;
            for(int neighbor : pair.second){
                if(!flag){
                    cout << ", ";
                }
                flag = false;
                cout << neighbor;
            }
            
            cout << "]" << endl;
        }
    }
};

void bfs(int start, unordered_map<int, list<int>> &adj, vector<bool> &visited){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";
        for(int neighbor : adj[node]){
            if(!visited[neighbor]){
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

void dfs(int node, unordered_map<int, list<int>> &adj, vector<bool> &visited){
    visited[node] = true;
    cout << node << " ";
    for(int neighbor : adj[node]){
        if(!visited[neighbor]){
            dfs(neighbor, adj, visited);
        }
    }
}

void stack_dfs(int start, unordered_map<int, list<int>> &adj, vector<bool> &visited){
    stack<int>st;
    st.push(start);
    visited[start] = true;
    
    while(!st.empty()){
        int node = st.top();
        st.pop();
        cout << node << " ";
        // Fix: Reverse order to maintain correct DFS traversal
        for(auto it = adj[node].rbegin(); it != adj[node].rend(); it++){
            if(!visited[*it]){
                st.push(*it);
                visited[*it] = true;
            }
        }
        
    }
}

int main(){
    Graph g;
    
    int n;
    cout << "Enter your vertex number: ";
    cin >> n;
    int m;
    cout << "Enter your edge number: ";
    cin >> m;
    
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        g.node(u, v, 0);
    }
    
    //g.print();
    vector<bool> visited(n, false);
    // bfs(0, g.adj, visited);
    
    dfs(0, g.adj, visited);
    
    return 0;
}