#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ans=INT_MAX;
void stairCase(ll *a,ll n,ll stair,ll step,bool *visited){
	if(stair==n){
		ans=min(ans,step);
	}
	visited[stair]=1;
	if(stair+1<=n and stair+a[stair]>=0 and !visited[stair+a[stair]]){
		stairCase(a,n,stair+a[stair],step+1,visited);
	}
	visited[stair]=0;
	return;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
       cin>>n;
       bool visited[10000]={0};
       ll a[n];
       for(int i=0;i<n;i++){
       	cin>>a[i];
       	stairCase(a,n,0,0,visited);
       }
	}
    
}