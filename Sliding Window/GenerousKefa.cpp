#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	string s1;
	cin>>s1;
	int m1[26]={0};
	for(int i=0;i<n;i++){
		m1[s1[i]-'a']++;
	}
	int m=-1;
	for(int i=0;i<26;i++){
		m=max(m,m1[i]);
	}
	if(m>k)
		cout<<"NO";
	else
		cout<<"YES";
}