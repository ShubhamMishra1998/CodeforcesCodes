#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll countSubstring(string &s1,int k){
	unordered_map<ll,ll> m1;
	ll sum=0;
	m1[0]=1;
	ll count=0;
	for(int i=0;i<s1.length();i++){
		sum+=s1[i]-'0';
        count+=m1[sum-k];
        m1[sum]++;
	}
	return count;
}
int main(){
	ll k;
	cin>>k;
	string s1;
	cin>>s1;
	cout<<countSubstring(s1,k);
}