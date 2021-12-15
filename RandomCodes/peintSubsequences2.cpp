#include<bits/stdc++.h>
using namespace std;
void printSubsequences(string s1,string s2,int i){
	cout<<s2<<endl;
	for(int j=i;j<s1.length();j++){
		s2+=s1[j];
		printSubsequences(s1,s2,j+1);
		s2.pop_back();
	}
}
int main(){
	string s1;
	cin>>s1;
	// cout<<s1;
	printSubsequences(s1,"",0);
}