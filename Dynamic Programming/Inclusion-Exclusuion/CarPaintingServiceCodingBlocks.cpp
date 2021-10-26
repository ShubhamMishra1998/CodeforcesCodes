#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
   ll n;
   cin>>n;
   ll M[n][3];
   for(int i=0;i<n;i++){
   	for(int j=0;j<3;j++){
   		cin>>M[i][j];
   	}
   }
  ll dp[n][3];
  dp[0][0]=M[0][0];
  dp[0][1]=M[0][1];
  dp[0][2]=M[0][2];
  for(int i=1;i<n;i++){
     dp[i][0]=min(dp[i-1][1],dp[i-1][2])+M[i][0];
     dp[i][1]=min(dp[i-1][0],dp[i-1][2])+M[i][1];
     dp[i][2]=min(dp[i-1][1],dp[i-1][0])+M[i][2];
  }
  cout<<min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]));

}