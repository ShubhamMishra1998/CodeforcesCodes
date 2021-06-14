#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	ll count=0;
	unordered_map<ll,bool> m1;
	unordered_map<ll,ll> m2;
	for(int i=0;i<n;i++){
		if(a[i]>=1&&a[i]<=n)
			m1[a[i]]=true;
		m2[a[i]]++;
	}
	priority_queue<ll,vector<ll>,greater<ll>> pq;
	for(int i=1;i<=n;i++){
		if(!m1[i]){
          pq.push(i);
		}
	}
	vector<ll> v1;
	for(auto it:m2){
		if(it.first>=1&&it.first<=n&&it.second==1)
			continue;
			
	   ll x=it.first;
	   ll y=it.second;
	   if(x>=1&&x<=n)
	   	y--;
	   while(y--){
	   	v1.push_back(x);
	   }
	}
	sort(v1.begin(),v1.end());
	for(int i=0;i<v1.size();i++){
		count+=abs(v1[i]-pq.top());
		pq.pop();
		//cout<<v1[i]<<' ';
	}
	cout<<count;
}