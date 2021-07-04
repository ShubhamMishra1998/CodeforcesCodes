#include<bits/stdc++.h>
using namespace std;
int drEvil(vector<int> a,int bit){
	vector<int> zero,one;
	int mask=1<<bit;
	for(int i=0;i<a.szie();i++){
		if(a[i]&mask==0){
			zero.push_back(a[i]);
		}else{
			one.push_back(a[i]);
		}
	}
	if()
}
int main(){
	int n;
	cin>>n;
	vector<int> v1(n);
	for(int i=0;i<n;i++){
		cin>>v1[i];
	}
	cout<<drEvil(v1,30);
}