#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll search(ll *prefix,ll n,ll x){
	ll res=-1,l=0,h=n-1,mid;
	while(l<=h){
		mid=(l+h)/2;
		if(prefix[mid]==x)
			return mid;
		else if(prefix[mid]<x){
			res=mid;
			l=mid+1;
		}else
		h=mid-1;
	}
	return res;

}
int main(){
	ll n,m;
	cin>>n>>m;
	ll a[n],b[m];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=0;j<m;j++){
		cin>>b[j];
	}
	ll prefix[n]={0};
	prefix[0]=a[0];
	for(int i=1;i<n;i++){
		prefix[i]=prefix[i-1]+a[i];
	}
	ll d=0;
	for(ll i=0;i<m;i++){
		d+=b[i];
		if(d>=prefix[n-1])
			d=0;
		ll j=search(prefix,n,d);
        cout<<(n-1-j)<<endl;
	}
}