#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,source;
    cin>>n>>m>>source;

    vector<pair<int,int> > g[n]; 

    int a,b,wt;
    for(int i=0;i<m;i++){
        cin>>a>>b>>wt;
        g[a].push_back(make_pair(b,wt));
        g[b].push_back(make_pair(a,wt));
    }
    cin >> source;

    // Dijkstra's algorithm begins here
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; //(min-heap) in Pair (dist,from)
    vector<int> distTo(n+1,INT_MAX);

    distTo[source]=0;
    pq.push(make_pair(0,source));

    while(!pq.empty()){
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();

        vector<pair<int,int> >::iterator it;
        for(auto it: g[prev]){
            int next = it.first;
            int wt = it.second;
            if( distTo[next] > distTo[prev] + nextDist){
				distTo[next] = distTo[prev] + nextDist;
				pq.push(make_pair(distTo[next], next));
			}
		}
		
	}
    cout << "The distances from source, " << source << ", are : \n";
	for(int i = 1 ; i<=n ; i++)	cout << distTo[i] << " ";
	cout << "\n";
	
	return 0;

}