#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string &s1){
	stack<char> st;
	for(char ch:s1){
		if(ch=='(')
			st.push(')');
		else if(ch=='{')
			st.push('}');
		else if(ch=='[')
			st.push(']');
		else if(ch==')'||ch=='}'||ch==']'){
			if(st.empty()||st.top()!=ch)
				return false;
			st.pop();
		}
	}
	if(!st.empty())
		return false;
	return true;
}
int main(){
	string s1;
	cin>>s1;
	if(isBalanced(s1))
		cout<<"true";
	else
		cout<<"false";
}