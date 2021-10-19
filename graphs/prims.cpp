#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,m; // nodes and m -> edges
    cin>>N>>m;
    vector<pair<int,int>> adj[N];

    int a,b,wt;
    for(int i=0;i<m;i++){
        cin>>a>>b>>wt;
        adj[a].push_back(make_pair(b,wt));
        adj[b].push_back(make_pair(a,wt));
    }

    int parent[N]; // stores the parent of each node
    int key[N];    // stores the key of each node
    bool mstSet[N]; // stores the nodes which are in the mst

    for(int i = 0; i < N; i++){
        key[i] = INT_MAX;
        mstSet[i] = false;
        parent[i] = -1;
    }

    key[0] = 0; // source node
    parent[0] = -1;    // the first node is the source node so its parent is -1
    int ansWeight = 0; 

    for(int count = 0; count < N-1; count++){
        int mini = INT_MAX,u;

        // find the minimum key node
        for(int v = 0; v < N; v++)
            if(mstSet[v] == false && key[v] < mini)
                mini = key[v],u = v;

        mstSet[u] = true; // add the node to the mst

        for(auto it : adj[u]){
            int v = it.first;
            int weight = it.second;
            if(mstSet[v] == false && weight < key[v]){
                parent[v] = u;
                key[v] = weight;
            }
        }


    }

    for(int i = 1; i < N; i++)
        cout<< parent[i]<<" "<<i<<endl;
        
    return 0;

}

// TEst cases
// 5 - No of nodes
// 6 - No of edges

// from 
// to
// weight
5 6 0 1 2 1 2 3 2 4 7 1 4 5 1 3 8 0 3 6




