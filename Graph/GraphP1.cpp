#include <bits/stdc++.h>
using namespace std;

class Graph{
    public:
        unordered_map<int, list<int> > adj;
        // u vertex v edge
        // Node is create successfully for graph 
        void node(int u, int v, bool dir){
            adj[u].push_back(v);
            if(dir == 0){
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
                    cout << neighbor;
                    flag = false;
                }
                cout << "]" << endl;
            }
        }
};

int main() {
    Graph g;
    int n, m;
    cout << "Enter the vertex number:";
    cin >> n;
    cout << "Enter the edge number:";
    cin >> m;
    
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        g.node(u, v, 0);
    }
    
    g.print();
    

    return 0;
}