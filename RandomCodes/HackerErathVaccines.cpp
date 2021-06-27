#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f1(ll n,ll m,vector<ll> &v1,ll mid){
	priority_queue<ll> pq;
	for(int i=0;i<m;i++){
		pq.push(v1[i]);
	}
	ll Max=mid;
	while(pq.size()<n){
         ll x=pq.top();
         pq.pop();
         n--;
         x-=mid;
         if(x>0)
         	pq.push(x);
	}
	while(!pq.empty()){
       Max=max(Max,pq.top());
       pq.pop();
	}
	return Max;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		ll sum=0,Max=-1;
		vector<ll> v1(m);
		for(int i=0;i<m;i++){
			cin>>v1[i];
			sum+=v1[i];
			Max=max(Max,v1[i]);
		}
		if(sum<=n)
			cout<<"1"<<'\n';
		else if(n==m){
			cout<<Max<<'\n';
		}else{
			cout<<f1(n,m,v1,sum/n)<<'\n';
		}
	}
}