#include<bits/stdc++.h>
using namespace std;
int getPow(int n){
	int i=1;
	while(i*2<=n){
        i=i*2;
	}
	return i;
}
int Josephus(int n){
	int nearestPower2=getPow(n);
	int l=n-nearestPower2;
	return 2*l+1;
}
int main(){
	int n;
	cin>>n;
	cout<<Josephus(n);
}