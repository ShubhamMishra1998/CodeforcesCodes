#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n;
		priority_queue<ll,vector<ll>,greater<ll>>pq; 
        for(int i=0;i<n;i++){
        	cin>>x;
        	pq.push(x);
        }
        ll ans=0;
        while(pq.size()>1){
        	ll a=pq.top();
        	pq.pop();
        	ll b=pq.top();
        	pq.pop();
        	ans+=a+b;
        	pq.push(a+b);
        }
        cout<<ans<<endl;
	}
}