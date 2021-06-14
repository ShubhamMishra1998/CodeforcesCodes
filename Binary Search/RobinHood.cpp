#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll n,k;
	cin>>n>>k;
	priority_queue<ll,vector<ll>,greater<ll>> pq1;
	priority_queue<ll> pq2;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		pq1.push(a[i]);
		pq2.push(a[i]);
	}
	bool flag=true;
	while(k--){
		if(pq1.top()==pq2.top()){
			cout<<"1";
			//retun 0;
			flag=false;
			break;
		}
		ll x=pq1.top();
		pq1.pop();
		ll y=pq2.top();
		pq2.pop();
		x++;
		y--;
		pq1.push(x);
		pq2.push(y);

	}
	if(flag)
	cout<<pq2.top()-pq1.top();
}