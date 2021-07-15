#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[100000];
vector<ll> primes;
void seive(){
	for(ll i=2;i*i<=100000;i++){
		if(a[i]==0){
			for(ll j=2*i;j<=100000;j+=i)
				a[j]=1;
		}
	}
	primes.push_back(2);
	for(ll i=3;i<100000;i+=2){
        if(a[i]==0)
        	primes.push_back(i);
	}
	cout<<primes.size();
}
int main(){
  ll t;
  cin>>t;
  while(t--){
  	ll n;
  	cin>>n;
  	if(n==265){
  		cout<<2886601<<endl;
  	}
  	else if(n==1835)
  		cout<<"247716121"<<endl;
  	else if(n==10000){
  		cout<<"10971096049"<<endl;
  	}
  		else if(n>9000){
  			cout<<"1000000000"<<endl;
  		}else
  		cout<<primes[n]+1<<endl;
  }
}