#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// multisource bfs;
ll n,m,s,k;
ll cost[10000][100];
ll a[100000];
vector<int> gr[100005];
void solve(){
	memset(cost,-1,sizeof(cost));
	queue<ll> q1;
	for(int p=0;p<=k;p++){
		if(a[i]==p){
			cost[i][p]=0;
			q1.push(i);
		}
		while(!q1.empty()){
			ll t=q1.front();
			q1.pop();
			for(auto it:gr[t]){
				if(cost[it][p]==-1){
					cost[it][p]=cost[t][p]+1;
					q1.push(it);
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		sort(cost[i+1],cost[i]+k+1);
		ll ans=0;
	    for(int j=1;j<=s;j++){
		ans+=cost[i][j];
		cout<<ans<<' ';
	}
	}

}
int main(){
    cin>>n>>m>>s>>k;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    for(int i=0;i<m;i++){
    	ll x,y;
    	cin>>x>>y;
    	gr[x].push_back(y);
    	gr[y].push_back(x);
    }
    solve()
}