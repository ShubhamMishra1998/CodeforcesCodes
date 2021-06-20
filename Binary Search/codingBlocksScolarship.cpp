#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll printAns(ll n,ll m,ll x,ll y){
	ll l=0,h=n,mid;
	ll res=0;
	while(l<=h){
		mid=l+(h-l)/2;
	    ll p=mid*x;
	    if(p<=m){
           res=mid;
           l=mid+1;
	    }
	    else if(p>m){
	    	ll u=(n-mid)*y;
	    	if(m+u>=p){
	    		res=mid;
	    		l=mid+1;
	    	}
	    	else
	    		h=mid-1;
	    }
	}
	return res;
}
int main(){
	ll n,m,x,y;
	cin>>n>>m>>x>>y;
	cout<<printAns(n,m,x,y);
}