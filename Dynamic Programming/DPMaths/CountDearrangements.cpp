#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll M=1e9+7;
ll Count(ll n){
	ll dp[n+1];
	dp[1]=0;
	dp[2]=1;
	for(int i=3;i<=n;i++){
		dp[i]=((i-1)*(dp[i-1]+dp[i-2]))%M;
	}
	return dp[n];
}
int main(){
	ll n;
	cin>>n;
	cout<<Count(n);
}