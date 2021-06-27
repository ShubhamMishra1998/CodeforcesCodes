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
		ll x1,x2,y1,y2,z1,z2;
		cin>>x1>>x2>>y1>>y2>>z1>>z2;
		if(x2>=x1&&y2>=y1&&z2<=z1)
			cout<<"YES"<<'\n';
		else
			cout<<"NO"<<'\n';
	}
}