#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void printMinSum(ll *a,ll n,ll k){
	ll sum=0, ans=1, minSum=0;
	for(int i=0;i<k;i++){
		sum+=a[i];
	}
	minSum=sum;
	for(ll i=k;i<n;i++){
	    sum-=a[i-k];
		sum+=a[i];
		if(sum<minSum){
			minSum=sum;
			ans=i-k+1+1;
		}
	}
	cout<<ans;
}
int main(){
	ll n,k;
	cin>>n>>k;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	printMinSum(a,n,k);
}