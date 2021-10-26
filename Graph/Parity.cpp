#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,a[1000009];
int main(){
   cin>>n;
   for(int i=1;i<=n;i++){
   	cin>>a[i];
   }
   vector<int> G[n+1];
   vector<int> ans(n+1);
   for(int i=1;i<=n;i++){
      int x=i-a[i];
      if(x>0 and (a[x]&1)==(a[i]&1))
      	G[x].push_back(i);
      int y=i+a[i];
      
   }

}