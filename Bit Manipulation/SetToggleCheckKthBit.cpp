#include<bits/stdc++.h>
using namespace std;
int setKthBit(int n,int k){
	int mask=(1<<k);
	return n|mask;
}
int unsetKthBit(int n,int k){
	int mask=~(1<<k);
	return n&mask;
}
int toggleKthBit(int n,int k){
	int mask=1<<k;
	return n^mask;
}
bool isSetKthBit(int n,int k){
	int mask=1<<k;
	if((n&mask)==0)
		return false;
	return true;
}
int main(){
	int n,k1,k2,k3,k4;
	cin>>n>>k1>>k2>>k3>>k4;
	cout<<setKthBit(n,k1)<<endl;
	cout<<unsetKthBit(n,k2)<<endl;
	cout<<toggleKthBit(n,k3)<<endl;
	if(isSetKthBit(n,k4))
		cout<<"true";
	else
		cout<<"false";
}