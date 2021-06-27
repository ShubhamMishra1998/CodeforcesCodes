#include<bits/stdc++.h>
using namespace std;\
typedef  int ll;
ll ans=INT_MAX;
void f1(ll a,ll b,ll c){
	if(a==1&&b==1){
		ans=min(ans,c);
		return;
	}
	if(a-b>1){
		f1(a-b,b,c+1);
	}
	 if(b-a>1)
		f1(a,b-a,c+1);
}
void  Count(ll n){
	if(n==1)return;
    for(int x=1;x<n;x++){
        f1(x,n-x,1);
    }
}
int main(){
   ll n;
   cin>>n;
   Count(n);
   cout<<ans;
}