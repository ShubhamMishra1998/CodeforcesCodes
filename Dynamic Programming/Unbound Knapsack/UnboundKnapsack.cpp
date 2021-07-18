#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll unboundKnapsack(ll *wt,ll *val,ll w,ll n){
	 int dp[w+1]={0};
        for(int j=1;j<=w;j++){
            for(int i=0;i<n;i++){
                if(j>=wt[i]){
                    dp[j]=max(dp[j],val[i]+dp[j-wt[i]]);
                }
            }
        }
        return dp[w];
}
int main(){
	ll n,w;
	cin>>n;
	ll wt[n],val[n];
	for(int i=0;i<n;i++){
		cin>>wt[i];
	}
	for(int i=0;i<n;i++){
		cin>>val[i];
	}
	cin>>w;
	cout<<unboundKnapsack(wt,val,w,n);
}