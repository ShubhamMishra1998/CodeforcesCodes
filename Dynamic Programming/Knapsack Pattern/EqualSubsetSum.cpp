#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPossible(ll *a,ll n,ll target){
     ll dp[n+1][target+1];
     memset(dp,0,sizeof(dp));
     for(int i=0;i<=n;i++){
     	dp[i][0]=1;
     }
     for(int i=1;i<=target;i++){
     	dp[0][i]=0;
     }
     for(int i=1;i<=n;i++){
     	for(int j=1;j<=target;j++){
     		if(j>=a[i-1]){
     			dp[i][j]=dp[i-1][j] or dp[i-1][j-a[i-1]];
     		}else{
     			dp[i][j]=dp[i-1][j];
     		}
     	}
     }
     return dp[n][target];

}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2){
    	cout<<"No";
    }else{
    	if(isPossible(a,n,sum/2)){
    		cout<<"Yes";
    	}else{
    		cout<<"No";
    	}
    }
    
}