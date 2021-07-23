#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MinStepsToReduceTo1(ll n){
	if(n==1)return 0;
	else if(n==2)return 1;
	else if(n==3)return 2;
	int count=0;
	while(n!=1){
		if(n%2==0)
			n=n/2;
		else if(n%4==1){
			n=n-1;
		}
		else if(n%4==3){
			n=n+1;
		}
		count++;
	}
	return count;
}
int main(){
	ll n;
	cin>>n;
	cout<<MinStepsToReduceTo1(n);
}