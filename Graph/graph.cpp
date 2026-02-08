#include <bits/stdc++.h>
#include<list>
using namespace std;

class Graph{
    
    public:
        unordered_map<int, list<int>> adj;
        
        void adEdge(int u, int v, bool direction){
            adj[u].push_back(v);
            if(direction == 0){
                adj[v].push_back(u);
            }
        }
        
        void print(){
            for(auto pair : adj){
                cout << pair.first << "->";
                for(int val : pair.second){
                    cout << val << ",";
                }
                cout << endl;
            }
        }
        
};

int main()
{
    Graph g;
    int n;
    cout << "Enter Nodes Number" ;
    cin >> n;
    int m;
    cout << "Enter Edges Number";
    cin >> m;
    
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        g.adEdge(u, v, 0);
    }
    
    g.print();
    
    return 0;
}