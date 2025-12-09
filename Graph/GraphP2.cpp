#include <bits/stdc++.h>
using namespace std;

class Graph{
    public:
        unordered_map<int, list<int>> adj;
        
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
                    if(flag == false){
                        cout << ", ";
                    }
                    cout << neighbor;
                    flag = false;
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

void dfsRecur(int start, unordered_map<int, list<int>> &adj, vector<bool> &visited){
    cout << start << " ";
    visited[start] = true;
    for(int neighbor : adj[start]){
        if(!visited[neighbor]){
            dfsRecur(neighbor, adj, visited);
        }
    }
}

void start_dfs(int start, unordered_map<int, list<int>> &adj, vector<bool> &visited){
    stack<int> st;
    st.push(start);
    visited[start] = true;
    
    while(!st.empty()){
        int node = st.top();
        st.pop();
        cout << node << " ";
        
        for(auto it = adj[node].rbegin(); it!=adj[node].rend(); it++){
            if(!visited[*it]){
                st.push(*it);
                visited[*it] = true;
            }
        }
    }
}

int main(){
    Graph g;
    cout << "Enter vertex number:";
    int n;
    cin >> n;
    cout << "Enter edge number:";
    int m;
    cin >> m;
    
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        g.node(u, v, 0);
    }
    
    g.print();
    
    vector<bool> visited(n, false);
    int start;
    cin >> start;
    //bfs(start, g.adj, visited);
    dfsRecur(start, g.adj, visited);
    
    return 0;
}