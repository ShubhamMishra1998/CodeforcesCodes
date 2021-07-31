#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MaxItem(ll *a,ll n,ll p,ll k){
	ll dp[n]={0};
	dp[0]=a[0];
	ll ans=0;
	if(dp[0]<=p)
		ans=1;
	for(int i=1;i<n;i++){
		if(i<k-1)
			dp[i]=a[i]+dp[i-1];
		else if(i==k-1)
			dp[i]=a[i];
		else{
			dp[i]=a[i]+dp[i-k];
		}
		if(dp[i]<=p)
			ans=i+1;
	}
	return ans;

}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,p,k;
		cin>>n>>p>>k;
		ll a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<MaxItem(a,n,p,k)<<'\n';
	}
}