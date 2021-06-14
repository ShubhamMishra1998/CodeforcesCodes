#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll getAns(ll *dp,ll l,ll r,ll n){
	if(l==1){
		return dp[r-1];
	}else{
		return dp[r-1]-dp[l-2];
	}
}
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
		ll dp1[n]={0},dp2[n]={0};
		dp1[0]=a[0];
		for(int i=1;i<n;i++){
			dp1[i]+=dp1[i-1]+a[i];
		}
		sort(a,a+n);
		dp2[0]=a[0];
		for(ll i=1;i<n;i++){
			dp2[i]+=dp2[i-1]+a[i];
		}
		ll q,qt,l,r;
		cin>>q;
		while(q--){
            cin>>qt>>l>>r;
            if(qt==1){
            	cout<<getAns(dp1,l,r,n)<<'\n';
            }else{
            	cout<<getAns(dp2,l,r,n)<<'\n';
            }
		}

}