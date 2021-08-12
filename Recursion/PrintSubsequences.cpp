#include<bits/stdc++.h>
using namespace std;
void printSubsequences(string s1,string ans){
	if(s1.size()==0){
		cout<<ans<<endl;
		return;
	}
	char ch=s1[0];
	s1.erase(s1.begin());
	printSubsequences(s1,ans+ch);
	printSubsequences(s1,ans);
}
int main(){
	string s1;
	cin>>s1;
	printSubsequences(s1,"");
}