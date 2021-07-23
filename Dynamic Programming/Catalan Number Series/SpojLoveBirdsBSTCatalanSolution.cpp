#include<bits/stdc++.h>
using namespace std;
int M=1908;
int c[10001];
int fun2(int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=(sum%M+(c[i]%M*c[n-1-i]%M)%M)%M;
	}
	return sum;
}
int dp[1001];
int fun1(int n){
	if(n==0)
		return c[0]=1;
	return c[n]=fun2(n);
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=0;i<=1000;i++){
    	dp[i]=fun1(i);
    }
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	cout<<dp[n]<<'\n';
    }
}