#include<iostream>
#include <unordered_map>
#include <list>
using namespace std;

class graph{
    public:
        unordered_map<int, list<int>> adj_list;

        void addEdge(int u, int v, bool direction){
            // 0 undirected graph
            // 1 directed graph

            // create edge u to v and v to u for undirected graph.
            adj_list[u].push_back(v);
            if(direction == 0){
                adj_list[v].push_back(u);
            }
        }

        void printGraph(){
            for(auto i : adj_list){
                cout << i.first << "-> ";
                for(auto j : i.second){
                    cout << j << ", ";
                }
                cout << endl;
            }
            
        }
};


int main(){

    int n;
    cout << "Enter the number of nodes" << endl;
    cin >> n;

    int m;
    cout << "Enter the number of edges" << endl;
    cin >> m;

    graph g;

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        //create an unordered list
        g.addEdge(u, v, 0);
    }

    g.printGraph();

    return 0;
}