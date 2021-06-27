#include<bits/stdc++.h>
using namespace std;
void printIndexesWithSumK(int *a,int n,int k){
	vector<pair<int,int>> ans;
	int sum=0;
	unordered_map<int,vector<int> > m1;
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum==k)
			ans.push_back({0,i});
		else if(m1[sum-k].size()>0){
             for(auto it:m1[sum-k]){
                 ans.push_back({it+1,i});
             }
		}
		m1[sum].push_back(i);
	}
	for(auto it:ans){
		cout<<it.first<<' '<<it.second<<'\n';
	}
}
int main(){
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	printIndexesWithSumK(a,n,k);
}