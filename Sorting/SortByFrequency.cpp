#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare(pair<ll,pair<ll,ll>> p1,pair<ll,pair<ll,ll>> p2){
	if(p1.first>p2.first)
		return true;
	if(p1.first==p2.first){
		if(p1.second.first<p2.second.first)
			return true;
		return false;
	}
	return false;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll n,m;
	cin>>n>>m;
	unordered_map<ll,ll> m1,m2;
	ll a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
		m1[a[i]]++;
		if(m2[a[i]]==0)
			m2[a[i]]=i+1;
	}
	vector<pair<ll,pair<ll,ll>>> v1;
	for(auto it:m1){
		v1.push_back(make_pair(it.second,make_pair(m2[it.first],it.first)));
	}
    sort(v1.begin(),v1.end(),compare);
    for(int i=0;i<v1.size();i++){
    	for(int j=0;j<v1[i].first;j++){
    		cout<<v1[i].second.second<<' ';
    	}
    }
}