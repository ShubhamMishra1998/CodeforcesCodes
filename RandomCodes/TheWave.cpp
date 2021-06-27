#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,q;
    cin>>n>>q;
    ll a[n];
    unordered_map<ll,ll> m1;
    //ll p=0,n=0;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	m1[a[i]]=1;
    }
	sort(a,a+n);
	ll x;
	while(q--){
       cin>>x;
       if(m1[x]==1){
       	cout<<"0"<<'\n';
       	continue;
       }
       int idx=lower_bound(a,a+n,x)-a;
      // cout<<idx<<'\n';
       if(idx==0){
       	if(n%2==0)cout<<"POSITIVE"<<'\n';
       	else cout<<"NEGATIVE"<<'\n';
       }

       else if(idx==n)cout<<"POSITIVE"<<'\n';
       else{
       	 int ct1=idx;
       	 int ct2=n-idx;
       	 if(ct2%2==0)cout<<"POSITIVE"<<'\n';
       	 //if(ct1>=ct2)cout<<"POSITIVE"<<'\n';cout<<"POSITIVE"<<'\n';
       	 else cout<<"NEGATIVE"<<'\n';
       }
	}

}