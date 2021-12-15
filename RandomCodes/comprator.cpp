#include<bits/stdc++.h>
using namespace std;
typedef pair<int,pair<int,int>> pii;
bool compare(pii p1,pii p2){
	if(p1.first==p2.first and p1.second.first==p2.second.first){
		return p1.second.second<p2.second.second;
	}else if(p1.first==p2.first){
		return p1.second.first>p2.second.first;
	}else{
		return p1.first<p2.first;
	}

}
int main(){
	int n;
	cin>>n;
	vector<int> p(n),c(n),m(n);
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	for(int i=0;i<n;i++){
		cin>>m[i];
	}
	vector<pair<int,pair<int,int>>> ans;
	for(int i=0;i<n;i++){
		ans.push_back(make_pair(p[i],make_pair(c[i],m[i])));
	}
	sort(ans.begin(),ans.end(),compare);
	for(auto it:ans){
		cout<<it.first<<' '<<it.second.first<<' '<<it.second.second<<'\n';
	}
}