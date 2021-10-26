#include<bits/stdc++.h>
using namespace std;
void bfs(vector<int> G[],int n,int s,int &ans){
      vector<int> dist(n+1,INT_MAX);
      queue<int> q1;
      q1.push(s);
      dist[s]=0;
      while(!q1.empty()){
      	int f=q1.front();
      	q1.pop();
      	for(auto it:G[f]){
      		if(dist[it]==INT_MAX){
      			dist[it]=1+dist[f];
      			q1.push(it);
      		}else if(dist[it]>=dist[f]){
                 ans=min(ans,dist[it]+dist[f]+1);
      		}
      	}
      }
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> G[n+1];
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		G[x].push_back(y);
		G[y].push_back(x);
	}
	int ans=n+1;
	for(int i=1;i<=n;i++){
		bfs(G,n,i,ans);
	}
	cout<<ans;
}