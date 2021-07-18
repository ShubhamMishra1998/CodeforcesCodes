#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct work{
    ll start;
    ll end;
};
bool compare(work w1,work w2){
	if(w1.end==w2.end){
		return w1.start<w2.start;
	}
	return w1.end<w2.end;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		work w[n];
		ll s,e;
		for(int i=0;i<n;i++){
			cin>>s>>e;
			w[i].start=s;
			w[i].end=e;
		}
		sort(w,w+n,compare);

		ll prevEnd=w[0].end;
		ll ans=1;
		for(ll i=1;i<n;i++){
			if(w[i].start>=prevEnd){
				ans++;
				prevEnd=w[i].end;
			}
		}
		cout<<ans<<endl;
	}

}