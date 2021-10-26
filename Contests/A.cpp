#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> ans;
void f1(){
	ll ct=1;
	while(ans.size()<1000){
		string s1=to_string(ct);
		if((ct%3!=0) and (s1[s1.size()-1]!='3')){
			ans.push_back(ct);
		}
		ct++;
	}

}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    f1();
    ll t;
    cin>>t;
    while(t--){
    	ll x;
    	cin>>x;
    	cout<<ans[x-1]<<endl;
    }

}