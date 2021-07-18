#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll getMaxPrice(ll *wt,ll *price,ll n,ll w){
	ll dp[n+1][w+1];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=w;j++){
			if(j>=wt[i-1]){
				dp[i][j]=max(dp[i-1][j],price[i-1]+dp[i-1][j-wt[i-1]]);
			}else{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	return dp[n][w];
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,w;
    cin>>n>>w;
    ll wt[n],price[n];
    for(int i=0;i<n;i++){
    	cin>>wt[i]>>price[i];
    }
    ll ans=getMaxPrice(wt,price,n,w);
    cout<<ans;
}