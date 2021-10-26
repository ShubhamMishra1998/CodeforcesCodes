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
    while(1){
    ll n,m;
    cin>>n>>m;
    if(n==0 and m==0)break;
    parent=new ll[n+1];
    Rank=new ll[n+1];
    for(int i=1;i<=n;i++){
      parent[i]=i;
      Rank[i]=i;
    }
    vector<pair<ll,pair<ll,ll>>> G;
    ll minCost=0,totalCost=0;
    for(int i=0;i<m;i++){
       ll s,d,w;
       cin>>s>>d>>w;
       totalCost+=w;
       G.push_back(make_pair(w,make_pair(s+1,d+1)));
    }
    sort(G.begin(),G.end());
    for(int i=0;i<G.size();i++){
      ll wt=G[i].first;
      ll s=G[i].second.first;
      ll d=G[i].second.second;
      if(Find(s)!=Find(d)){
           minCost+=wt;
           Union(s,d);
      }
    }
    cout<<totalCost-minCost<<endl;
 }
} 