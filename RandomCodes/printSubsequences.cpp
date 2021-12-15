#include<bits/stdc++.h>
using namespace std;
void printSubsequences(string s1,string s2){
	if(s1.size()==0){
		cout<<s2<<endl;
		return;
	}
	char ch=s1[0];
	s1=s1.substr(1);
	printSubsequences(s1,s2);
	printSubsequences(s1,s2+ch);
}
int main(){
	string s1;
	cin>>s1;
	// cout<<s1;
	printSubsequences(s1,"");
}