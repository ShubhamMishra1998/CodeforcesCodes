#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,k;
ll a[5005];
ll dp[5005][5005];
ll georgeAndJob(ll i,ll count){
	if(i>n-m or count==k){
        return 0;
	}
	if(dp[i][count]!=-1)
		return dp[i][count];
	ll opt1=0,opt2=0;
	for(int k=i;k<i+m;k++){
		opt1+=a[k];
	}
	opt1=georgeAndJob(i+m,count+1)

}
int main(){
    cin>>n>>m>>k;
    ll a[n];
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    	cin>>a[i];
    ll ans=georgeAndJob(0,0);
    cout>>ans;
}