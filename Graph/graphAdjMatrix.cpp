#include <bits/stdc++.h>
using namespace std;
class Graph{
    private:
        int numVertices;
        vector<vector<int>> adj;
    public:
        Graph(int vertices) : numVertices(vertices){
            adj.resize(numVertices, vector<int>(numVertices, 0));
        }
        
        void addEdge(int src, int dest){
            if(src >= 0 && src < numVertices && dest >= 0 &&dest < numVertices){
                adj[src][dest] = 1;
                adj[dest][src] = 1;
            }else{
                cout << "Invalid vertices!" << endl;
            }
        }
        
        void print(){
            
            for(int i = 0; i < numVertices; i++){
                for(int j = 0; j < numVertices; j++){
                    cout << adj[i][j] << " ";
                }
            }
            
            cout << endl;
        }
};


int main(){
    
    return 0;
}