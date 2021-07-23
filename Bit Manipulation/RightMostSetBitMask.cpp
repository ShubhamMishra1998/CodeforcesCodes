#include<bits/stdc++.h>
using namespace std;
string convertIntegerToBinary(int n){
	string ans="";
	while(n){
		int rem=n%2;
		ans+=to_string(rem);
		n/=2;
	}
	reverse(ans.begin(),ans.end());
	return  ans;
}
int rightMostSetBitMask(int n){
	return n & -n;
}
int main(){
	int n;
	cin>>n;
	int ans=rightMostSetBitMask(n);
	cout<<convertIntegerToBinary(ans);

}