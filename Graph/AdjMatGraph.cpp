#include <bits/stdc++.h>
using namespace std;

class Graph{
    private:
        int numOfVer;
        vector<vector<int>> adj;
    public:
        Graph(int num) : numOfVer(num){
            adj.resize(numOfVer, vector<int>(numOfVer, 0));
        }
        void addAdj(int n, int v){
            if(n >= 0 && n < numOfVer && v >= 0 && v < numOfVer){
                adj[n][v] = 1;
                adj[v][n] = 1;
            }
        }
        void print(){
            cout << "Graph print" << endl;
            for(int i = 0; i < numOfVer; i++){
                for(int j = 0; j < numOfVer; j++){
                    cout << adj[i][j] << " ";
                }
                cout << endl;
            }
        }
        
};

int main(){

    Graph g(5); // Create graph with 5 vertices

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.print();


    return 0;
}