#include<bits/stdc++.h>
using namespace std;
int BinomialCoefficient(int n,int r){
	long int M=1e9+7;
       int dp[r+1];
       memset(dp,0,sizeof(dp));
       dp[0]=1;
       for(int i=1;i<=n;i++){
           for(int j=min(i,r);j>0;j--){
               dp[j]=(dp[j]+dp[j-1])%M;
           }
       }
       return dp[r];
}
int main(){
	int n,r;
	cin>>n>>r;
	cout<<BinomialCoefficient(n,r);
}