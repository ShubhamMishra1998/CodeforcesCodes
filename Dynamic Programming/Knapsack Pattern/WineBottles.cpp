#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[1001][1001];
ll maxVal(ll *a,ll i,ll j,ll ct){
	if(i>j)return 0;
	if(i==j){
		if(ct%2==0)
		return 0;
	    else
	    	return a[i];
	}
	if(dp[i][j]!=-1)
		return dp[i][j];
	if(ct%2==0){
		ll p1=maxVal(a,i+1,j,ct+1);
		ll p2=maxVal(a,i,j-1,ct+1);
		return dp[i][j]=min(p1,p2);
	}else{
		ll x=a[i]+maxVal(a,i+1,j,ct+1);
		ll y=a[j]+maxVal(a,i,j-1,ct+1);
		return dp[i][j]=max(x,y);
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		memset(dp,-1,sizeof(dp));
		ll n;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<maxVal(a,0,n-1,1)<<endl;
	}
}