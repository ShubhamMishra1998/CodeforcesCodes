#include<bits/stdc++.h>
using namespace std;
void printDistinctPermutations(string s1,string s2,set<string> &st){
	if(s1.length()==0){
		st.insert(s2);
		return;
	}
	for(int i=0;i<s1.size();i++){
		char ch=s1[i];
		string left=s1.substr(0,i);
		string right=s1.substr(i+1);
		printDistinctPermutations(left+right,s2+ch,st);
	}
}
int main(){
	string s1;
	cin>>s1;
	set<string> st;
	printDistinctPermutations(s1,"",st);
	for(auto it:st){
		cout<<it<<endl;
	}
}