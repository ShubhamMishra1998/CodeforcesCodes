#include<bits/stdc++.h>
using namespace std;
void oneRepeatingAndOneMissing(int *a,int n){
	int xxory=0;
	for(int i=0;i<n;i++){
		xxory=xxory^a[i];
	}
	for(int i=1;i<=n;i++){
		xxory=xxory^i;
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
	for(int i=1;i<=n;i++){
		if((i&rsbm)==0){
			x=x^i;
		}else{
			y=y^i;
		}
	}
	for(int i=0;i<n;i++){
		if(x==a[i]){
			cout<<"Missing Number -> "<<y<<endl;
			cout<<"Repeating Number -> "<<x<<endl;
			break;
		}else if(y==a[i]){
			cout<<"Missing Number -> "<<x<<endl;
			cout<<"Repeating Number -> "<<y<<endl;
			break;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	oneRepeatingAndOneMissing(a,n);
}