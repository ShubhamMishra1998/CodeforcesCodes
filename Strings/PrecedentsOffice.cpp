#include<bits/stdc++.h>
using namespace std;
vector<int> dx={-1,0,0,1};
vector<int> dy={0,-1,1,0};
int SubOrdinates(vector<string> &v1,int n,int m,char c){
    set<char> st;
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(v1[i][j]==c){
    			for(int k=0;k<4;k++){
    				int rr=i+dx[k];
    				int cc=j+dy[k];
    				if(rr<0||cc<0||rr>=n||cc>=m||v1[rr][cc]=='.'||v1[rr][cc]==c)
    					continue;
    				//cout<<v1[rr][cc]<<' ';
    				st.insert(v1[rr][cc]);
    			}
    		}
    	}
    }
    return st.size();
}
int main(){
	int n,m;
	char c;
	cin>>n>>m>>c;
	vector<string> v1(n);
	for(int i=0;i<n;i++)
		cin>>v1[i];
	cout<<SubOrdinates(v1,n,m,c);

}