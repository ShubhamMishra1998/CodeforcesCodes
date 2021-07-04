#include<bits/stdc++.h>
using namespace std;
void printSubsets(vector<int> v1,int idx,set<vector<int>> &st,vector<int> v2,int target){
	if(target==0){
		st.insert(v2);
		return;
	}
	for(int i=idx;i<v1.size();i++){
		v2.push_back(v1[i]);
		printSubsets(v1,i+1,st,v2,target-v1[i]);
		v2.pop_back();
	}
}
int main(){
	int n,target;
	cin>>n;
	vector<int> v1(n);
	for(int i=0;i<n;i++){
		cin>>v1[i];
	}
	cin>>target;
	sort(v1.begin(),v1.end());
	set<vector<int>> st;
	vector<int> v2;
	printSubsets(v1,0,st,v2,target);
	for(auto it:st){
		for(int i=0;i<it.size();i++){
			cout<<it[i]<<' ';
		}
		cout<<' ';
	}
	cout<<endl;
	cout<<st.size();

}