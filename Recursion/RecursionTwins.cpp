#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1;
	cin>>s1;
	int ct=0;
	for(int i=1;i<s1.length()-1;i++){
		if((s1[i-1]==s1[i+1]) and (s1[i-1]!=s1[i]))
			ct++;
	}
	cout<<ct;
}