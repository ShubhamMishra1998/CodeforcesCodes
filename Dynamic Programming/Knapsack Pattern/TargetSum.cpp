#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f1(vector<int> &v1,vector<vector<int>> &dp,int s1,int n){
    if(n==0){
        if(s1==0)
            return 1;
        return 0;
    }
    if(dp[n][s1]!=-1)
        return dp[n][s1];
    int p1=0,p2=0;
    if(s1-v1[n-1]>=0)
        p1=f1(v1,dp,s1-v1[n-1],n-1);
    p2=f1(v1,dp,s1,n-1);
    dp[n][s1]=p1+p2;
    return dp[n][s1];
}
int main(){
     ll n,target,sum=0;
     cin>>n;
     ll a[n];
     for(int i=0;i<n;i++){
          cin>>a[i];
          sum+=a[i];
     }
     cin>>target;
     if((target+sum)%2 == 1 or target>sum)
          cout<<"0"<<endl;
     ll newSum=(sum+target)/2;
     cout<<CountSubsets(a,n,newSum);
}