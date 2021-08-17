
void BFS(vector<int> adj[],int N,int src){
    int dist[N];
    for(int i=0;i<N;i++){
        dist[i]=INT_MAX;
    }
    queue<int> qst.push(node);;

    dist[src]=0;
    q.push(src);
    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto it: adj[node]){
            if(dist[node] + 1 < dist[it]){
                dist[it] = dist[node] + 1;
                q.push(it);
            }
        }
    }
    for(int i=0;i<N;i++) cout<<dist[i]<<" ";
    cout<<endl;
}




}