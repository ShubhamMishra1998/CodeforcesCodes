#include<bits/stdc++.h>
using namespace std;
#define sz 100001
typedef long long ll;
ll shift=100001;
ll dp[101][2*sz];
ll dimaAndSalad(ll *taste,ll *cal,ll sum,ll i,ll n,ll k){
	if(i>=n){
		if(sum==0)
			return 0;
		else
			return -1e12;
	}
	if(dp[i][shift+sum]!=-1)
		return dp[i][shift+sum];
	ll opt1=taste[i]+dimaAndSalad(taste,cal,sum+(taste[i]-k*cal[i]),i+1,n,k);
	ll opt2=dimaAndSalad(taste,cal,sum,i+1,n,k);
	dp[i][shift+sum]=max(opt1,opt2);
	return dp[i][shift+sum];
}
int main(){
	memset(dp,-1,sizeof(dp));
	ll n,k;
	cin>>n>>k;
	ll taste[n],cal[n];
	for(int i=0;i<n;i++){
		cin>>taste[i];
	}
	for(int i=0;i<n;i++){
		cin>>cal[i];
	}
	ll ans=dimaAndSalad(taste,cal,0,0,n,k);
	if(ans<=0)
		cout<<"-1";
	else
		cout<<ans;

}