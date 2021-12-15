#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
int main(){
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    ll dp[n+1];
    for(int i=0;i<=n;i++){
    	dp[i]=INT_MAX;
    }
    dp[0]=0;
    for(int i=1;i<=n;i++){
        dp[i]=a+dp[i-1];
        if(i-m<=0)
        	dp[i]=min(dp[i],b);
        if(i-m>=0)
        	dp[i]=min({dp[i],dp[i-m]+b,dp[i-1]+b});
        dp[i]=min(dp[i],dp[i-1]+b);
    }
    // for(int i=0;i<=n;i++){
    // 	cout<<dp[i]<<' ';
    // }
    cout<<dp[n];
}
// 10 3 5 1
// 1 1000 1 2