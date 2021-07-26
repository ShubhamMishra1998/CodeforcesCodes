#include<bits/stdc++.h>
using namespace std;
bool isValid(string s1){
	if(s1[0]!='a')return false;
	int i=0;
	int n=s1.length();
	while(i<s1.length()){
		if(s1[i]!='a')return false;
		if(i+1<n and s1[i+1]=='a'){
			i++;
			continue;
		}
		if(i+1<s1.length() and s1[i+1]!='b')return false;
		if(i+2<s1.length() and s1[i+2]!='b')return false;
		if(i+1<n and i+2>=n)return false;
		i=i+3;
	}
	return true;
}
int main(){
	string s1;
	cin>>s1;
	if(isValid(s1))
		cout<<"true";
	else
		cout<<"false";
}