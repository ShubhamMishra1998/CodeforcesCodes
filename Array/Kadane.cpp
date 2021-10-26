#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,t;
ll getCount(ll *a,ll k){
	int count=0,sum=0;
    unordered_map<int,int> m1;
    m1[0]=1;
    for(int i=0;i<n;i++){
      sum+=a[i];
      int y=sum-k;
      if(m1[y]>0)
      count+=m1[y];
      m1[sum]++;
    }
    return count;
}
void kadaneAlgorithm(ll *a){
	int localMaxima=a[0],globalMaxima=a[0];
        for(int i=1;i<n;i++){
            if(localMaxima+a[i]<a[i])
            localMaxima=a[i];
            else
            localMaxima+=a[i];
            globalMaxima=max(globalMaxima,localMaxima);
        }
	int count= getCount(a,globalMaxima);
	cout<<globalMaxima<<' '<<count<<'\n';

      
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   cin>>t;
   while(t--){
   	cin>>n;
   	ll a[n];
   	for(int i=0;i<n;i++){
   		cin>>a[i];
   	}
   	kadaneAlgorithm(a);
   }
}