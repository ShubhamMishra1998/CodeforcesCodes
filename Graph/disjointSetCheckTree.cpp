#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll *parent;
ll *Rank;
ll Find(ll x){
	if(parent[x]==x)
		return x;
	return parent[x]=Find(parent[x]);
}
void Union(ll x,ll y){
	ll p=Find(x);
	ll q=Find(y);
	if(p!=q){
		if(Rank[p]>Rank[q]){
			parent[q]=p;
		}else if(Rank[q]>Rank[p]){
			parent[p]=q;
		}else{
			parent[q]=p;
			Rank[p]++;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    parent=new ll[n+1];
    Rank=new ll[n+1];
    for(int i=1;i<=n;i++){
    	parent[i]=i;
    	Rank[i]=0;
    }
    bool isCycle=false;
    ll conectedComponents=n;
    for(int i=0;i<m;i++){
    	ll x,y;
    	cin>>x>>y;
    	ll p=Find(x);
    	ll q=Find(y);
    	if(p==q){
    		isCycle=true;
    		break;
    	}else{
    		conectedComponents--;
    		Union(x,y);
    	}
    }
    if(isCycle==false and conectedComponents==1)
    	cout<<"YES";
    else
    	cout<<"NO";
}