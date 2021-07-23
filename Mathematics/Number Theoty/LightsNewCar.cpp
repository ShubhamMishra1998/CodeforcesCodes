#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll M = 1e9+7;
ll fastPower(ll a,ll b){
	int res=1;
	while(b){
		if(b%2){
			res=(res*a)%M;
		}
		a=(a*a)%M;
		b=b>>1;
	}
	return res;
}
ll stringToModulu(string s1,ll M1){
	ll ans=0;
	for(int i=0;i<s1.length();i++){
		ans=(ans*10+(s1[i]-'0'))%M1;
	}
	return ans;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		ll x=stringToModulu(s1,M);
		ll y=stringToModulu(s2,M-1);
		//cout<<x<<' '<<y<<endl;
		ll res=fastPower(x,y);
		cout<<res<<endl;

	}

}