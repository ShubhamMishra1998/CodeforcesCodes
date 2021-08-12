#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll INF=1e9+7;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   ll n,w;
   cin>>n>>w;
   ll wt[n],val[n];
   ll sum=0;
   for(int i=0;i<n;i++){
   	cin>>wt[i]>>val[i];
   	sum+=val[i];
   }
   ll dp[n+1][sum+1];
   memset(dp,INF,sizeof(dp));
   for(int i=0;i<=sum;i++){
      dp[0][i]=INF;
   }
   for(int i=0;i<=n;i++){
   	  dp[i][0]=0;
   }

   for(int i=1;i<=n;i++){
   	for(int j=1;j<=sum;j++){
   		dp[i][j]=dp[i-1][j];
   		if(j<val[i-1])
   			continue;
   		dp[i][j]=min(dp[i-1][j],wt[i-1]+dp[i-1][j-val[i-1]]);

   	}
   }
   ll ans=0;
   for(int i=0;i<=sum;i++){
   	if(dp[n][i]<=w)
   		ans=i;
   }
   cout<<ans;


}