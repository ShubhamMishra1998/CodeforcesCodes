#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,q;
	cin>>n>>q;
	ll a[n];
	unordered_map<ll,ll> m1;
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	priority_queue<ll> pq;
	for(int i=0;i<n;i++){
		pq.push(a[i]);
	}
	ll l,r;
	ll count[n+2]={0};
    vector<pii> p1;
	for(int i=0;i<q;i++){
		cin>>l>>r;
		count[l]++;
		count[r+1]--;
		p1.push_back({l,r});

	}
	for(int i=2;i<=n;i++){
		count[i]+=count[i-1];
	}
	// for(int i=1;i<=n;i++)
	// 	cout<<count[i]<<' ';
	 priority_queue<pii> pq1;
	 for(int i=1;i<=n;i++){
	 	pq1.push({count[i],i});
	 }
	while(!pq1.empty()){
		 a[pq1.top().second-1]=pq.top();
		 pq1.pop();
		 pq.pop();
	}
	for(int i=1;i<n;i++){
		a[i]+=a[i-1];
	}
	ll sum=0;
	for(int i=0;i<q;i++){
		ll left=p1[i].first;
		ll  right=p1[i].second;
		if(left==1){
			sum+=a[right-1];
		}else{
			sum+=a[right-1]-a[left-1-1];
		}
	}
	cout<<sum;

}