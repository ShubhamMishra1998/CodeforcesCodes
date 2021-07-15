#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++){
       cin>>a[i];
	}
	set<ll> st;
	for(int i=0;i<n;i++){
		st.insert(a[i]);
		auto it=st.find(a[i]);
		if(it==st.begin())
			cout<<"-1"<<'\n';
		else{
			it--;
			cout<<*it<<'\n';
		}
	}
}