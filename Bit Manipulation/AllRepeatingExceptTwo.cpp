#include<bits/stdc++.h>
using namespace std;
void printAllRepeatingExcept2(int *a,int n){
	int xxory=0;
	for(int i=0;i<n;i++){
		xxory=xxory^a[i];
	}
	int rsbm=(xxory & -xxory);
	int x=0,y=0;
	for(int i=0;i<n;i++){
		if((a[i]&rsbm)==0){
			x=x^a[i];
		}else{
			y=y^a[i];
		}
	}
	if(x<y){
		cout<<x<<endl<<y;
	}else{
		cout<<y<<endl<<x;
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	printAllRepeatingExcept2(a,n);
}