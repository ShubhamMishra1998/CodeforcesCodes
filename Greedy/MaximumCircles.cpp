#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class circle{
public:
    ll start;
    ll end;
};
bool compare(circle c1,circle c2){
	if(c1.end==c2.end){
		return c1.start<c2.start;
	}
	return c1.end<c2.end;
}
int main(){
	ll n;
	cin>>n;
	ll c1,r;
    circle c[n];
    for(int i=0;i<n;i++){
    	cin>>c1>>r;
    	c[i].start=c1-r;
    	c[i].end=c1+r;
    }
    sort(c,c+n,compare);
    ll ans=1;
    ll currentEnd=c[0].end;
    for(int i=1;i<n;i++){
    	if(c[i].start>=currentEnd){
    		ans++;
    		currentEnd=c[i].end;
    	}
    }
    cout<<n-ans;
}