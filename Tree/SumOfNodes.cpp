#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	string s1;
	getline(cin,s1);
	ll sum=0;
	string s2="";
	for(int i=0;i<s1.length();i++){
		if(s1[i]==' '){
            if(s2=="true" or s2=="false"){
            	s2="";
            	continue;
            }else{
            	sum+=stol(s2);
            	s2="";
            }
		}else{
			s2+=s1[i];
		}
	}
	cout<<sum;
}