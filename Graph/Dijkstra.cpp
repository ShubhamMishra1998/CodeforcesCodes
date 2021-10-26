#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> pii;
#define INF 1e18
void printPath(vector<ll> &path,ll v){
	vector<ll> ans;
	ans.push_back(v);
	int ver=v;
	while(ver!=1){
		ver=path[ver];
		ans.push_back(ver);
	}
	reverse(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<' ';
 
}
void dijkstaAlgorithm(vector<pii> G[],ll v){
	vector<ll> dist(v+1,INF);
	vector<ll> path(v+1,0);
	priority_queue<pii,vector<pii>,greater<pii>> pq;
	dist[1]=0;
	pq.push({0,1});
	while(pq.size()>0){
		ll poppedVertex=pq.top().second;
		ll poppedDistence=pq.top().first;
		pq.pop();
		if(dist[poppedVertex]<poppedDistence)
			continue;
		for(auto it:G[poppedVertex]){
			ll vertex=it.first;
			ll weight=it.second;
			if(dist[vertex]>dist[poppedVertex]+weight){
				dist[vertex]=dist[poppedVertex]+weight;
				pq.push({dist[poppedVertex]+weight,vertex});
				path[vertex]=poppedVertex;
			}
		}
	}
	if(dist[v]==INF){
		cout<<"-1";
		return;
	}
	printPath(path,v);
}
int main(){
    ll v,e,a,b,c;
    cin>>v>>e;
    vector<pii> G[v+1];
    for(int i=0;i<e;i++){
    	cin>>a>>b>>c;
    	G[a].push_back({b,c});
    	G[b].push_back({a,c});
    }
    dijkstaAlgorithm(G,v);
 
}