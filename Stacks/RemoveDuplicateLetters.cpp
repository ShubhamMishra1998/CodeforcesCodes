#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string s) {
        string res="";
        stack<char> st;
        for(char ch:s){
            if(!st.empty() and st.top()==ch)
                st.pop();
            else
                st.push(ch);
        }
        //string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
int main(){
	string s1;
	cin>>s1;
	cout<<removeDuplicates(s1);
}