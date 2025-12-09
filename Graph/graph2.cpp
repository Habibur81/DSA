// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Graph{
    public:
        unordered_map<int, list<int>> adj;
        void insertData(int u, int v, bool direction){
            adj[u].push_back(v);
            if(direction == 0){
                adj[v].push_back(u);
            }
        }
        void print(){
            for(auto pair : adj){
                cout << pair.first << "->";
                for(auto i : pair.second){
                    cout << i <<" ";
                }
                cout << endl;
            }
        }
        
};

int main(){
    Graph obj;
    int n;
    cout << "Enter Node size " ;
    cin >> n;
    int m;
    cout << "Enter Edge size ";
    cin >> m;

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        obj.insertData(u,v,0);
    }
    
    obj.print();

    return 0;
}