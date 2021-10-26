#include<bits/stdc++.h>
using namespace std;
void printTopologicalSort(vector<int> G[],int v){
	queue<int> q1;
	//q1.push(1);
	vector<int> indegree(v+1,0);
	for(int i=1;i<=v;i++){
       for(auto it:G[i]){
       	indegree[it]++;
       }
	}
	for(int i=1;i<=v;i++){
		if(indegree[i]==0)
			q1.push(i);
	}
	while(!q1.empty()){
		int f=q1.front();
		q1.pop();
		cout<<f<<' ';
		for(auto it:G[f]){
			indegree[it]--;
			if(indegree[it]==0)
				q1.push(it);
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
	}
	printTopologicalSort(G,v);
}