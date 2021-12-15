#include<bits/stdc++.h>
using namespace std;
void printNextGreater(vector<int> &nums1,vector<int> &nums2){
	unordered_map<int,int> m1;
	int n=nums1.size();
	stack<int> st;
	for(int i=n-1;i>=0;i--){
		if(st.empty()){
			m1[nums1[i]]=-1;
			st.push(nums1[i]);
		}else{
			while(!st.empty() and st.top()<nums1[i]){
				st.pop();
			}
			if(st.empty())
				m1[nums1[i]]=-1;
			else
				m1[nums1[i]]=st.top();
			st.push(nums1[i]);
		}
	}
	for(int x:nums2){
		cout<<m1[x]<<'\n';
	}
}
vector<int> getArray(string s1){
	string s="";
	vector<int> ans;
	for(char ch:s1){
		if(ch==' '){
           ans.push_back(stoi(s));
           s="";
		}else{
			s+=ch;
		}
	}
	 ans.push_back(stoi(s));
	 return ans;
}
int main(){
	string s1,s2;
	getline(cin,s1);
	// cin.ignore();
	getline(cin,s2);
	vector<int> nums1=getArray(s1);
	vector<int> nums2=getArray(s2);
	cout<<nums1.size()<<'\n';
	printNextGreater(nums2,nums1);
}