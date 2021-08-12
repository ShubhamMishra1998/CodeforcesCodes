#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void printMax(ll *a,ll n,ll k){
	deque<ll> dq;
	for(int i=0;i<k;i++){
		while((!dq.empty()) and (a[i]>a[dq.back()]))
			dq.pop_back();
		dq.push_back(i);
	}
	// cout<<dq.size()<<endl;
	for(int i=k;i<n;i++){
		cout<<a[dq.front()]<<' ';
		while((!dq.empty()) and (dq.front()<=i-k))
			dq.pop_front();
		while((!dq.empty()) and (a[i]>a[dq.back()]))
			dq.pop_back();
		dq.push_back(i);
	}
	cout<<a[dq.front()];

}
int main(){
	ll n,k;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	printMax(a,n,k);
}
