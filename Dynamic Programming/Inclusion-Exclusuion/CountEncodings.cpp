#include<bits/stdc++.h>
using namespace std;
int numDecodings(string s1) {
        int n=s1.size();
        if(n==0)return 0;
        int dp[n+1];
    dp[0]=1;
    dp[1]=1;
    if(s1[0]=='0')return 0;
    for(int i=2;i<=n;i++)
    {
        dp[i]=0;
        if(s1[i-1]>'0')
        dp[i]=dp[i-1];
        if(s1[i-2]=='1'||(s1[i-2]=='2'&&s1[i-1]<'7'))
        {
            dp[i]+=dp[i-2];
        }
        
        
    }
    return dp[n];
    }
int main(){
    string s1;
    cin>>s1;
    int n=numDecodings(s1);
    cout<<n;
}