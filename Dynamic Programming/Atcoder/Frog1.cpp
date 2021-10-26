#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ll dp[n];
	dp[n-1]=0;
	dp[n-2]=abs(a[n-1]-a[n-2]);
	for(int i=n-3;i>=0;i--){
		ll cost1=abs(a[i]-a[i+1])+dp[i+1];
        ll cost2=abs(a[i]-a[i+2])+dp[i+2];
        dp[i]=min(cost1,cost2);
	}
	cout<<dp[0];
}