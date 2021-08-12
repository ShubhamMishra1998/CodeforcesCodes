#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[1000][1000];
ll maxVal(ll *a,ll i,ll j,ll year){
	if(i>j)
		return 0;
	if(i==j)
		return a[i]*year;
	if(dp[i][j]!=-1)
		return dp[i][j];
	ll m1=a[i]*year+maxVal(a,i+1,j,year+1);
	ll m2=a[j]*year+maxVal(a,i,j-1,year+1);
	dp[i][j]=max(m1,m2);
	return dp[i][j];
}
int main(){
	ll n;
	cin>>n;
	ll a[n];
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<maxVal(a,0,n-1,1);
}