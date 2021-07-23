#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int allRepeatingExcept1(int *a,int n){
	int p=a[0];
	for(int i=1;i<n;i++){
		p=p^a[i];
	}
	return p;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<allRepeatingExcept1(a,n);
}