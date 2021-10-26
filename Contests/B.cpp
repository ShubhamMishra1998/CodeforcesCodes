#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    	ll a,b,c;
    	cin>>a>>b>>c;
    	if(a>b)
         swap(a,b);
    		ll k=b-a;
    		ll len=2*(b-a);
            if(a>len or b>len or c>len)
            	cout<<"-1"<<endl;
            else{
                 if(c+k>len){
                 	cout<<c-k<<endl;
                 }else{
                 	cout<<c+k<<endl;
                 }

            }


    	}

}
