#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll getMaxPrice(ll *wt,ll *price,ll n,ll w,vector<vector<ll>> &dp){
	if(n==0)
		return 0;
	if(dp[n][w]!=-1)
		return dp[n][w];
	ll sum1=0,sum2=0;
	if(w-wt[n-1]>=0)
		sum1+=price[n-1]+getMaxPrice(wt,price,n-1,w-wt[n-1],dp);
	sum2=getMaxPrice(wt,price,n-1,w,dp);
	dp[n][w]=max(sum1,sum2);
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
    vector<vector<ll>> dp(n+1,vector<ll>(w+1,-1));
    ll ans=getMaxPrice(wt,price,n,w,dp);
    cout<<ans;
}