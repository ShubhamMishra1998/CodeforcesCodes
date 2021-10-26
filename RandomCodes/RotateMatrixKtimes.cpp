#include<bits/stdc++.h>
using namespace std;
int n,m,k;
void Rotate(vector<int> &v1){
   k=k%m;
   reverse(v1.begin(),v1.end());
   reverse(v1.begin(),v1.begin()+k);
   reverse(v1.begin()+k,v1.end());
}
int main(){
    cin>>n>>m>>k;
    vector<vector<int>> M(n,vector<int>(m));
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		cin>>M[i][j];
    	}
    }
    for(int i=0;i<n;i++){
    	Rotate(M[i]);
    }
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		cout<<M[i][j]<<' ';
    	}
    	cout<<endl;
    }
}