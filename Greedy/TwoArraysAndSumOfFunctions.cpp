#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll M=998244353;
int main(){
	ll n;
	cin>>n;
	ll a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		a[i]=a[i]*(i+1)*(n-i);
	}
	sort(a,a+n);
	sort(b,b+n,greater<ll>());
	ll sum=0;
	for(int i=0;i<n;i++){
		sum+=(a[i]%M)*(b[i]%M);
		sum=sum%M;
	}
	cout<<sum;

}