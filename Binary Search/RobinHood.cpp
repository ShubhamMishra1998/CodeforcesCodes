#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll m,n,i,j,k,sum=0;
	scanf("%lld %lld",&m,&n);
	ll a[m];
	for(i=1;i<=m;i++) scanf("%lld",&a[i]),sum+=a[i];
	bool flag=0;
	if(sum%m!=0) sum=sum/m+1,flag=1;
	else sum=sum/m;
	ll ans=10000000000000,l=0,r=1000000000000,o=100;
	ll maxn,minn;
	while(o--){
		ll mid=(l+r)>>1,tmp=0;
		if(mid<0) break;
		for(i=1;i<=m;i++){
			tmp+=max(0LL,a[i]-sum-mid);
		}
		if(tmp<=n){
			ans=min(ans,mid);
			r=mid-1;
		}
		else l=mid+1;
	}
	maxn=ans+sum;
	if(flag==1) sum--;
	ans=10000000000000,l=0,r=10000000000,o=100;
	while(o--){
		ll mid=(l+r)>>1,tmp=0;
		if(mid<0) break;
		for(i=1;i<=m;i++){
			tmp+=max(0LL,(sum-mid)-a[i]);
		}
		if(tmp<=n){
			ans=min(ans,mid);
			r=mid-1;
		}
		else l=mid+1;
	}
	minn=sum-ans;
	cout<<maxn-minn<<endl;
}