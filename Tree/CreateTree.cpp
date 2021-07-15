#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    if(s2.find(s1)!=string::npos){
      int cnt=1;
      while(1){
      	if(s1.find(s2)!=string::npos){
      		if(cnt==1)
      			cout<<"0";
      		else
      		cout<<cnt;
      		break;
      	}else{
      		cnt++;
      		s1+=s1;
      	}
      }
    }else
    cout<<"-1";
}