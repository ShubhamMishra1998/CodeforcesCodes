#include<bits/stdc++.h>
using namespace std;
string printAns(string &s1){
	int n=s1.length();
	set<char> st;
	for(int i=0;i<n;i++){
		if((i+1<n)&&(s1[i]==s1[i+1])){
			int ct=1;
			while((i+1<n)&&(s1[i]==s1[i+1])){
				i++;
				ct++;
			}
			if(ct%2)
			st.insert(s1[i]);
		}else{
			st.insert(s1[i]);
		}
	}
	string res="";
	for(auto it:st){
		res+=it;
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1;
		cin>>s1;
		cout<<printAns(s1)<<'\n';
	}
}