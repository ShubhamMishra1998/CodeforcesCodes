#include<bits/stdc++.h>
using namespace std;
vector<int> dx={0,1};
vector<int> dy={1,0};
// vector<int> dx={1,0};
// vector<int> dy={0,1};
vector<vector<bool>> visited(1001,vector<bool>(1001,false));
vector<vector<int>> ans(1001,vector<int>(1001,0));
bool print(vector<string> v1,int r,int c,int n,int m,bool &flag){
    visited[r][c]=true;
    ans[r][c]=1;
    if(r==n-1&&c==m-1){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            cout<<ans[i][j]<<' ';
            cout<<'\n';
        }
        flag=true;
        return true;
    }
    for(int i=0;i<2;i++){
      int rr=r+dx[i];
      int cc=c+dy[i];
      if(rr<0||rr>=n||cc<0||cc>=m||visited[rr][cc]==true||v1[rr][cc]=='X')
      continue;
      bool f1 = print(v1,rr,cc,n,m,flag);
      if(f1==true)
      return  true;
    }
     visited[r][c]=false;
      ans[r][c]=0;
      return  false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<string> v1(n);
    bool f2=false;
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    bool flag=false;
    // vector<vector<bool>> visited(n,vector<bool>(m,false));
    // vector<vector<int>> ans(n,vector<int>(m,0));
    print(v1,0,0,n,m,flag);
    if(flag==false)
    cout<<"-1";
}