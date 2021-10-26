#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> G[],int s,vector<bool> &visited){
	visited[s]=true;
	cout<<s<<' ';
	for(auto it:G[s]){
		if(!visited[it]){
			dfs(G,it,visited);
		}
	}
}
void dfsHelper(vector<int> G[],int v){
	vector<bool> visited(v+1,false);
	for(int i=1;i<=v;i++){
		if(!visited[i]){
			dfs(G,i,visited);
		}
	}
}
int main(){
	int v,e,a,b;
	cin>>v>>e;
	vector<int> G[v+1];
	for(int i=0;i<e;i++){
		cin>>a>>b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	dfsHelper(G,v);

}