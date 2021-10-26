#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> G[],int s,stack<int> &st,vector<bool> &visited){
	visited[s]=true;
	for(auto it:G[s]){
		if(!visited[it])
			dfs(G,it,st,visited);
	}
	st.push(s);
}
void doDfs(vector<int> G[],int s,vector<bool> &visited){
	visited[s]=true;
	cout<<s<<' ';
	for(auto it:G[s]){
		if(!visited[it])
			doDfs(G,it,visited);
	}
}
void printStronglyConnected(vector<int> G[],int n){
	vector<bool> visited(n+1,false);
	stack<int> st;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dfs(G,i,st,visited);
		}
	}
	//transpose
	vector<int> G2[n+1];
	for(int i=1;i<=n;i++){
		for(auto it:G[i]){
			G2[it].push_back(i);
		}
	}
	for(int i=0;i<=n;i++){
		visited[i]=false;
	}
	while(!st.empty()){
		int x=st.top();
		st.pop();
		if(!visited[x]){
			doDfs(G2,x,visited);
			cout<<endl;
		}
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> G[n+1];
	for(int i=0;i<m;i++){
		int s,d;
		cin>>s>>d;
		G[s].push_back(d);
	}
	printStronglyConnected(G,n);
}