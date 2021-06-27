#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void printSubSets(ll *a,ll n,set<vector<int>> &st,ll target){
	ll Max=pow(2,n-1);
	for(ll i=1;i<=Max;i++){
		//cout<<"h";
		int ct=n-1;
		int sum=0;
		int j=i;
		vector<int> v1;
		while(j>0){
			int u=j&1;
			if(u==1){
				sum+=a[ct];
				v1.push_back(a[ct]);
			}
            ct--;
            j/=2;
		}
		if(sum==target){
			st.insert(v1);
		}
	}
}
int main(){
	ll n,target;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>target;
	sort(a,a+n,greater<ll>());
	set<vector<int>> st;
	printSubSets(a,n,st,target);
	for(auto it:st){
		for(int i=0;i<it.size();i++){
            cout<<it[i]<<' ';
		}
		cout<<'\n';
	}

}