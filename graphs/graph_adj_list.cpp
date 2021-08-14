#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    // n => Nodes
    // m => Edges
    cin >> n >> m;

    // Without weights

    vector<int> adj[n+1];

    for(int i = 0;i < m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // With weights

    vector<pair<int,int>> adjWeighted[n+1];

    for(int i = 0; i < m;i++){
        int u,v,w;
        cin >> u >> v >> w;

        adjWeighted[u].push_back({v,w});
        adjWeighted[v].push_back({u,w});
    }
    
    return 1;
}