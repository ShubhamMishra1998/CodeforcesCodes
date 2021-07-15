#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	ll a,b;
	string s1;
	cin>>t;
	set<pair<ll,string>> st;
	unordered_map<string,ll> m1;
	ll ct=0;
	while(t--){
		ct++;
        cin>>a;
        if(a==1){
        	cin>>s1>>b;
            m1[s1]=b;
            st.insert({b,s1});
        }else if(a==2){
        	cin>>s1>>b;
        	auto it=st.find({m1[s1],s1});
        	st.erase(it);
        	m1[s1]=b;
        	st.insert({b,s1});
        }else{
        	cin>>s1;
        	cout<<(*st.begin()).second<<' '<<ct<<'\n';
        	st.erase(st.begin());
        }
	}
}