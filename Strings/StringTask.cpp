#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1;
	cin>>s1;
	string s2="";
	for(char ch:s1){
		ch=toupper(ch);
		if(ch=='A'||ch=='O'||ch=='Y'||ch=='E'||ch=='U'||ch=='I')
			continue;
		s2+='.';
		s2+=tolower(ch);
	}
	cout<<s2;
}