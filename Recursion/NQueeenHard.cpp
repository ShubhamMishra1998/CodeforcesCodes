#include<bits/stdc++.h>
using namespace std;
int ans=0;
bool col[30]={0},ld[30]={0},rd[30]={0};
void NQueen(int i,int n){
	if(i==n){
		ans++;
		return;
	}
	for(int j=0;j<n;j++){
		if(col[j]==0 and ld[i+j]==0 and rd[j-i+(n-1)]==0){
            col[j]=1;
            ld[i+j]=1;
            rd[j-i+(n-1)]=1;
           NQueen(i+1,n);
           col[j]=0;
            ld[i+j]=0;
            rd[j-i+(n-1)]=0;
		}
	}
}
int main(){
	int n;
	cin>>n;
	NQueen(0,n);
	cout<<ans;
}