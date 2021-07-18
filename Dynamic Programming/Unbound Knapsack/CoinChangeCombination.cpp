#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>target;
    int dp[target+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=a[i];j<=target;j++){
            dp[j]=dp[j]+dp[j-a[i]];
        }
    }
    cout<<dp[target];
}