#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,k;
bool isPossible(ll *ht){
	int i=0;
	while(i+1<n){
		ll currentHt=ht[i];
		ll nextHt=ht[i+1];
		if(currentHt-nextHt>=0){
			ll height=currentHt;
			ll diff=height-nextHt;
			m+=diff;
			height-=diff;
            if(height>=k){
            	m+=height-k;
            }else{
            	m+=height;
            }
            i++;
		}else{
			ll diff=nextHt-currentHt;
			if(diff==k){
				i++;
			}else if(diff<k){
				ll extra=k-diff;
				if(extra>=currentHt){
					m+=currentHt;
				}else{
					m+=extra;
				}
				i++;
			}else{
				ll required=diff-k;
				if(m<required)
					return false;
				else{
					m-=required;
					i++;
				}
			}
		}
	}
	return true;
}
int main(){
   ll t;
   cin>>t;
   while(t--){
   	cin>>n>>m>>k;
   	ll ht[n];
   	for(int i=0;i<n;i++){
   		cin>>ht[i];
   	}
   	if(isPossible(ht)){
   		cout<<"YES"<<'\n';
   	}else{
   		cout<<"NO"<<'\n';
   	}
   }
}
