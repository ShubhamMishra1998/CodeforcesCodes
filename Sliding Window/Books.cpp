#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll longestSubarrayWithSum(ll *a,ll n,ll t){
	ll ws=0,we=0,sum=0,maxLen=0;
	for(we=0;we<n;we++){
		sum+=a[we];
		while(sum>t){
			sum-=a[ws];
			ws++;
		}
		maxLen=max(maxLen,we-ws+1);
	}
	return maxLen;
}
int main(){
	ll n,t;
	cin>>n>>t;
	ll a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<longestSubarrayWithSum(a,n,t);
}