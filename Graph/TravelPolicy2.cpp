#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,n,m,s,q;
int man(){
    ll t;
    cin>>t;
    while(t--){
    	cin>>n>>m>>s>>q;
    	vector<pair<ll>> G[n+1],G1[n+1];
    	for(int i=0;i<n;i++){
    		ll x,y,z;
    		cin>>x>>y>>z;
    		G[x].push_back({y,z});
    		G1[y].push_back({x,z});
    	}

    }
}