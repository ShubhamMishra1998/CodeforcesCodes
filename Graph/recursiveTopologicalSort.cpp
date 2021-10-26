#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void dfs(vector<ll> G[],ll s,vector<bool> &visited,vector<ll> &ans){
	visited[s]=true;
	for(auto it:G[s]){
		if(!visited[it])
			dfs(G,it,visited,ans);
	}
	ans.push_back(s);
}
void topologicalSort(vector<ll> G[],ll n){
    vector<ll> ans;
    vector<int> indegree(n+1,0);
    for(int i=1;i<=n;i++){
    	for(auto it:G[i]){
    		indegree[it]++;
    	}
    }
    queue<ll> q1;
    for(int i=1;i<=n;i++){
    	if(indegree[i]==0)
    		q1.push(i);
    }
    while(!q1.empty()){
    	ll f=q1.front();
    	q1.pop();
    	ans.push_back(f);
    	for(auto it:G[f]){
    		indegree[it]--;
    		if(indegree[it]==0)
    			q1.push(it);
    	}
    }
    if(ans.size()!=n){
    	cout<<"Sandro fails.";
    }else{
    	ans.clear();
    	vector<bool> visited(n+1,false);
    	for(ll i=n;i>0;i--){
            if(!visited[i]){
            	dfs(G,i,visited,ans);
            }
    	}
    	reverse(ans.begin(),ans.end());
    	for(int i=0;i<ans.size();i++){
    		cout<<ans[i]<<' ';
    	}
    }

}
int main(){
   ll n,m,a,b;
   cin>>n>>m;
   vector<ll> G[n+1];
   for(int i=0;i<m;i++){
   	cin>>a>>b;
   	G[a].push_back(b);
   }
   for(int i=1;i<=n;i++){
   	sort(G[i].begin(),G[i].end(),greater<ll>());
   }
   topologicalSort(G,n);
}