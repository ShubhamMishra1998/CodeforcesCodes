#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string getText(ll *a,ll n){
	string text="";
	for(int i=1;i<n;i++){
		if(a[i]>a[i-1])
			text+="G";
		else if(a[i]==a[i-1])
			text+="E";
		else
			text+="L";
	}
	return text;
}
void calculateReset(string &pat,ll *reset){
	ll n=pat.length();
	ll i=1,j=0;
	while(i<n){
		while(j>0&&pat[j]!=pat[i]){
			j=reset[j-1];
		}
		if(pat[i]==pat[j]){
			reset[i]=j+1;
			i++;
			j++;
		}else{
			i++;
		}
	}
}
bool found(string &text,string &pat,ll *reset){
	ll n=text.length(),m=pat.length(),i=1,j=0;
	while(i<n){
		while(j>0&&pat[j]!=text[i]){
			j=reset[j-1];
		}
		if(pat[j]==text[i]){
			i++;
			j++;
		}else{
			i++;
		}
		if(j==m)
		return true;
	}
	return false;

}
int main(){
    ll t;
    cin>>t;
    while(t--){
    	ll n;
    	string pat;
    	cin>>n;
    	ll a[n];
    	for(int i=0;i<n;i++)
    		cin>>a[i];
    	cin>>pat;
    	string text=getText(a,n);
    	ll reset[pat.length()]={0};
    	calculateReset(pat,reset);
    	if(found(text,pat,reset))
    		cout<<"YES"<<'\n';
    	else
    		cout<<"NO"<<'\n';
    }
}