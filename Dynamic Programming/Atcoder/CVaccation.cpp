#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   ll n;
   cin>>n;
   ll a[n][3];
   for(int i=0;i<n;i++){
      for(int j=0;j<3;j++)
         cin>>a[i][j];
   }
   ll dp[n][3];
   memset(dp,0,sizeof(dp));
   for(int i=0;i<3;i++)
      dp[0][i]=a[0][i];
   for(int i=1;i<n;i++){
      for(int j=0;j<3;j++){
         if(j==0)
            dp[i][j]=a[i][j]+max(dp[i-1][1],dp[i-1][2]);
         else if(j==1)
            dp[i][j]=a[i][j]+max(dp[i-1][0],dp[i-1][2]);
         else if(j==2)
            dp[i][j]=a[i][j]+max(dp[i-1][0],dp[i-1][1]);
      }
   }
   cout<<max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
}