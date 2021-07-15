#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void printEncodings(string s1,string s2,vector<string> &ans){
	if(s1.size()==0){
		ans.push_back(s2);
		return;
	}
	if(s1[0]=='0')return;
	string s4=s1.substr(0,1);
	int p=stoi(s4);
	p--;
	    char ch=p+97;
	   // cout<<ch<<' ';
		printEncodings(s1.substr(1),s2+ch,ans);
	if(s1.length()>1){
		string s3=s1.substr(0,2);
		int x=stoi(s3);
		if(x<=26){
		x--;
		char ch=x+97;
		printEncodings(s1.substr(2),s2+ch,ans);
	}
	}
}
int main(){
	string s1;
	cin>>s1;
	vector<string> ans;
	printEncodings(s1,"",ans);
	cout<<'[';
	for(int i=0;i<ans.size()-1;i++){
		cout<<ans[i]<<", ";
	}
	cout<<ans[ans.size()-1]<<']';
}