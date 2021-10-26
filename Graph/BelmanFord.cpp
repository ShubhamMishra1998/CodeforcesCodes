#include<bits/stdc++.h>
using namespace std;
void bellManFord(vector<pair<int,int>> G[],int n,int s){
    vector<int> dist(n+1,INT_MAX);
    dist[s]=0;
    for(int i=0;i<n-1;i++){
    	
    }

}
int main(){
	ll n,m;
	cin>>n>>m;
	vector<pair<int,int>> G[n+1];
	for(int i=0;i<m;i++){
		ll a,b,c;
		cin>>a>>b>>c;
		G[a].push_back({b,c});
	}
	bellManFord(G,n);
}