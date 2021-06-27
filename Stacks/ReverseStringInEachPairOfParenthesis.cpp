#include<bits/stdc++.h>
using namespace std;
void printAns(string &s1,int n){
	stack<char> st;
	string res="";
	for(char ch:s1){
		if(ch!=')')
			st.push(ch);
		else{
           string s="";
           while(!st.empty() and st.top()!='('){
           		s+=st.top();
           		st.pop();
           }
           st.pop();
           for(int j=0;j<s.length();j++)
           	st.push(s[j]);
		}
	}
	while(!st.empty()){
		res+=st.top();
		st.pop();
	}
	reverse(res.begin(),res.end());
	cout<<res;
}
int main(){
	string s1;
	cin>>s1;
	printAns(s1,s1.length());
}