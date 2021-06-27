#include<bits/stdc++.h>
using namespace std;
void f1(vector<string> &ans,string s1,int o,int c){
	if(o==0&&c==0){
		ans.push_back(s1);
		return;
	}
	if(o!=0){
		string left=s1;
		left+='(';
		f1(ans,left,o-1,c);
	}
	if(c>o){
		string right=s1;
		right+=')';
		f1(ans,right,o,c-1);
	}
}
int main(){
	int n;
	cin>>n;
	vector<string> ans;
	f1(ans,"",n,n);
	for(int i=ans.size()-1;i>=0;i--){
		cout<<ans[i]<<endl;
	}
}