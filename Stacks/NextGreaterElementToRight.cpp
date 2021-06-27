#include<bits/stdc++.h>
using namespace std;
void printNextGreater(vector<int> &v1,int n){
	stack<int> st;
	vector<int> ans;
	for(int i=n-1;i>=0;i--){
		if(st.empty()){
			st.push(v1[i]);
			ans.push_back(-1);
		}
		else{
			while(!st.empty()&&st.top()<v1[i])
				st.pop();
			if(st.empty())
				ans.push_back(-1);
			else
				ans.push_back(st.top());
			st.push(v1[i]);
		}
	}
	reverse(ans.begin(),ans.end());
	for(int i=0;i<n;i++){
		cout<<ans[i]<<' ';
	}

}
int main(){
	int n;
	cin>>n;
	vector<int> v1(n);
	for(int i=0;i<n;i++){
		cin>>v1[i];
	}
	printNextGreater(v1,n);
}