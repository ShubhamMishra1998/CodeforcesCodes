#include<bits/stdc++.h>
using namespace std;
vector<string> getSubsequences(string s1){
      if(s1.length()==0){
      	vector<string> v1;
      	v1.push_back(" ");
      	return v1;
      }
      char ch=s1[0];
      s1.erase(s1.begin());
      vector<string> v2=getSubsequences(s1);
      vector<string> ans;
      for(string s:v2)
      	ans.push_back(s);
      for(string s:v2)
      	ans.push_back(ch+s);
      string s2=to_string(int(ch));
      for(string s:v2){
      	ans.push_back(s2+s);
      }
      return ans;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	string s1;
	cin>>s1;
	//reverse(s1.begin(),s1.end());
	vector<string> ans=getSubsequences(s1);
	for(string s:ans){
		cout<<s<<' ';
	}
	cout<<endl;
	cout<<ans.size();

}