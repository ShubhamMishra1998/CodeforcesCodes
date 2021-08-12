#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll M1=1000000007;
int main(){
     ll n,m,k;
     cin>>n>>m>>k;
     ll M[n][m];
     for(int i=0;i<n;i++){
          for(int j=0;j<m;j++)
               M[i][j]=0;
     }
     ll a,b;
     for(int i=0;i<k;i++){
          cin>>a>>b;
          M[a-1][b-1]=-1;
     }
     for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              if(M[i][j]==-1)
               M[i][j]=0;
              else{
                if(i==0 and j==0)
                    M[i][j]=1;
                else if(i==0)
                    M[i][j]=M[i][j-1];
               else if(j==0)
                    M[i][j]=M[i-1][j];
               else{
                    M[i][j]=(M[i-1][j]+M[i][j-1])%M1;
               }

              }
          }
     }
     cout<<M[n-1][m-1];
}