#include<bits/stdc++.h>
using namespace std;
void reverseStack(stack<int> &st){
	if(st.size()==1){
		int x=st.top();
	    st.pop();
	    return x;
	}
	int p=reverseStack(st);

}
int main(){
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	reverseStack(st);
	while(!st.empty()){
		cout<<st.top()<<endl;
		st.pop();
	}

}