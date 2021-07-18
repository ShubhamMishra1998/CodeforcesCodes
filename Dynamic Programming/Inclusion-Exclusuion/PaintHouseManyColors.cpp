#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int M[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>M[i][j];
    }
    int dp[n][m];
    for(int j=0;j<m;j++)
    dp[0][j]=M[0][j];
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            int minVal=INT_MAX;
            for(int k=0;k<m;k++){
                if(k!=j)//do not take adjacent values
            minVal=min(minVal,dp[i-1][k]);
            }
            dp[i][j]=M[i][j]+minVal;
        }
    }
    int ans=INT_MAX;
    for(int j=0;j<m;j++)
    ans=min(ans,dp[n-1][j]);
    cout<<ans;
}