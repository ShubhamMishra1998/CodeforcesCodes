#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Phi(ll n){
	int r=n;
	for(int p=2;p*p<=n;p++){
		if(n%p==0){
			while(n%p==0)
				n=n/p;
			r=r-r/p;
		}
	}
	if(n>1)
		r=r-r/n;
	return r;

}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<Phi(n)<<endl;
	}
}