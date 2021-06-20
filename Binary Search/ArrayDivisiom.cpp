#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
int main(){
	ll n;
	cin>>n;
	ll sum=0;
	ll a[n];
		map<ll,ll> v1,v2;
	for(int i=0;i<n;i++){
       cin>>a[i];
       sum+=a[i];
       v2[a[i]]++;
	}
	if(sum%2==1)
		cout<<"NO";
	else{
       ll pre = 0, req;
 
	for (int i = 0; i < n; i++) {
		pre += a[i];
		req = sum / 2 - pre;
		v1[a[i]]++;
		v2[a[i]]--;
 
		if (req == 0 || (req > 0 && v2[req] > 0) || (req < 0 && v1[-req]>0)) {
			puts("YES");
			return 0;
		}
	}
 
	puts("NO");
	}
}