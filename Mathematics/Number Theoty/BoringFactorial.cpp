#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,p;
ll fastPower(ll a,ll b,ll p){
	ll res=1;
	while(b){
		if(b%2==1)
			res=(res*a)%p;
		a=(a*a)%p;
		b=b>>1;
	}
	return res;
}
ll solve(){
	ll ans=-1;
	for(ll i=1;i<=p-1;i++){
		ans=((ans%p)*fastPower(i,p-2,p))%p;
	}
	return ans;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
       cin>>n>>p;
       if(n>=p){
       	cout<<"0"<<endl;
       }else{
       	cout<<solve()<<endl;
       }
	}
}