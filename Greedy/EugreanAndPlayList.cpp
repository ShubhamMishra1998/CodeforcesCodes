#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll n,m;
	cin>>n>>m;
	vector<ll> v1;
	ll sum=0;
	ll ci,ti;
	for(int i=0;i<n;i++){
		cin>>ci>>ti;
		sum+=(ci*ti);
		v1.push_back(sum);
	}
	ll q;
	for(int i=0;i<m;i++){
      cin>>q;
      auto it=lower_bound(v1.begin(),v1.end(),q)-v1.begin();
      if(it==0){
      	cout<<it+1<<'\n';
      }
      else{
      	if(v1[it]>v1[it-1])
          cout<<it+1<<'\n';
        else{
        	cout<<it<<'\n';
        }
      }
	}
}