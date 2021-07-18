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
    for(int j=0;j<=target;j++){
        for(int i=0;i<n;i++){
            if(j-a[i]>=0)
            dp[j]+=dp[j-a[i]];
        }
    }
    cout<<dp[target];
}