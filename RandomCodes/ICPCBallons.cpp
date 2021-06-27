#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		//unordered_map<ll,ll> m1;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ct=0;
		ll m1[8]={0};
		for(int i=0;i<n;i++){
			if(a[i]<=7&&m1[a[i]]==0){
				ct++;
				m1[a[i]]++;
			}
			if(ct==7){
				cout<<i+1<<'\n';
				break;
			}
		}
	}
}