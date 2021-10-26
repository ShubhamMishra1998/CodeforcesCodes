#include<bits/stdc++.h>
using namespace std;
void bfs(vector<int> G[],int v){
	queue<int> q1;
	vector<bool> visited(v+1,false);
	q1.push(1);
	//visited[1]=true;
	while(!q1.empty()){
		int c=q1.size();
		while(c--){
			int x=q1.front();
			q1.pop();
			if(!visited[x]){
				cout<<x<<' ';
				visited[x]=true;
			}
			for(auto it:G[x]){
                if(!visited[it])
                	q1.push(it);
			}
		}
		cout<<endl;
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
	bfs(G,v);

}