#include<bits/stdc++.h>
using namespace std;
int LongestIncreasing(int *a,int n){
	int dp[n];
	for(int i=0;i<n;i++){
		dp[i]=1;
	}
	int maxLen=1;
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j] && dp[i]<dp[j]+1){
				dp[i]=1+dp[j];
			}
		}
	}
	for(int i=0;i<n;i++){
		maxLen=max(maxLen,dp[i]);
	}
	return maxLen;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<LongestIncreasing(a,n)<<endl;
}