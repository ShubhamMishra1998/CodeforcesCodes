#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll goodSequence(ll *a,ll n){
	unordered_map<ll,ll> m1;
	for(int i=0;i<n;i++){
		m1[a[i]]++;
	}
	ll count=0;
	for(auto it:m1){
		if(it.second!=it.first){
			if(it.second<it.first)
				count+=it.second;
			else
				count+=(it.second-it.first);
		}
	}
	return count;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<goodSequence(a,n);
}