#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isValid(ll *a,ll mid,ll k,ll n){
	ll ct=1,lastPos=a[0];
	for(int i=1;i<n;i++){
		if(a[i]-lastPos>=mid){
			ct++;
			if(ct==k)return true;
				lastPos=a[i];
		}
	

	}
	return false;
}
ll printMinDisteace(ll *a,ll n,ll k){
	ll low=a[0],high=a[n-1],mid,result=-1;
	while(low<=high){
		mid=(low+high)/2;
		if(isValid(a,mid,k,n)){
			result=mid;
		    low=mid+1;
		}else{
		   high=mid-1;
		}
	}
	return result;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<printMinDisteace(a,n,k)<<'\n';
	}
}