#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll n;
	cin>>n;
	ll a[n];
	bool f=false,s=false;
	bool fg1=false,fg2=false;
	ll s1=0,s2=0;
	vector<ll> v1,v2;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>0){
			f=true;
			s=false;
			s1+=a[i];
			v1.push_back(a[i]);
		}else{
			s=true;
			f=false;
			s2+=abs(a[i]);
			v2.push_back(abs(a[i]));
		}
	}
	if(s1>s2){
		cout<<"first";
	}else if(s2>s1){
		cout<<"second";
	}else{
        for(int i=0;i<min(v1.size(),v2.size());i++){
        	ll x=(v1[i]);
        	ll y=(v2[i]);
        	if(x!=y){
        		if(x>y){
        			fg1=true;
        			cout<<"first";
        			break;
        		}else if(x<y){
                      fg2=true;
        			  cout<<"second";
        			  break;
        		}
        	}
        }
        //cout<<flag1<<' '<<flag2;
        if(!fg1 and !fg2){
        	if(f)cout<<"first";
        	else cout<<"second";
        }

	}
}