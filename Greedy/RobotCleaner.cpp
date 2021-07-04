#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool f1(string a, string b) {
    ll val = 0, fans1 = 0, fans2 = 0;
    string ans = a + b;
    for (int i = 0; i < ans.size(); i++)
        if (ans[i] == 's')val++;
        else fans1 += val;
    ans = b + a;
    val = 0;
    for (int i = 0; i < ans.size(); i++)
        if (ans[i] == 's')val++;
        else fans2 += val;
    return (fans1 > fans2);
}
int main(){
	int n;
	cin>>n;
	vector<string> vs(n);
	string res="";
	for(int i=0;i<n;i++){
		cin>>vs[i];
	}
	sort(vs.begin(),vs.end(),f1);
	for(string s1:vs){
		res+=s1;
	}
	long long int cs=0;
	long long int ans=0;
	for(int i=0;i<res.size();i++){
        if(res[i]=='s'){
        	cs++;
        }else{
        	ans+=cs;
        }
	}
	cout<<ans;

}