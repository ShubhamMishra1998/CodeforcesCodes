#include<bits/stdc++.h>
using namespace std;
typedef long long  int ll;
int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll n,m;
	cin>>n>>m;
	ll a[n],b[m];
	priority_queue<ll> pq2;
	priority_queue<ll,vector<ll>,greater<ll> > pq1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		pq1.push(a[i]);
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
		pq2.push(b[i]);
	}
	ll count=0;
	while(!pq1.empty() and !pq2.empty()&&pq1.top()<pq2.top()){
		ll x=pq1.top();
		pq1.pop();
		ll y=pq2.top();
		pq2.pop();
		ll mid=(x+y)/2;
		count+=(mid-x)+(y-mid);
		//pq1.push(mid);
		//pq2.push(mid);
	}
	cout<<count;

}