#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int getBinaryToDecimal(string s1){
	int ans=0;
    reverse(s1.begin(),s1.end());
    for(int i=0;i<s1.length();i++){
    	ans+=((s1[i]-'0')*pow(2,i));
    }
    return ans;
}
vector<string> getGreyCodes(int n){
	if(n==1){
		vector<string> v1;
		v1.push_back("0");
		v1.push_back("1");
		return v1;
	}
	vector<string> codes=getGreyCodes(n-1);
	vector<string> ans;
	for(string s1:codes){
		ans.push_back("0"+s1);
	}
	for(int i=codes.size()-1;i>=0;i--){
		ans.push_back("1"+codes[i]);
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	vector<string> greyCodes=getGreyCodes(n);
	vector<int> intGreyCodes;
	for(string s1:greyCodes){
		intGreyCodes.push_back(getBinaryToDecimal(s1));
	}
	sort(intGreyCodes.begin(),intGreyCodes.end());
	cout<<'[';
	for(int i=0;i<intGreyCodes.size();i++){
		if(i<intGreyCodes.size()-1)
			cout<<intGreyCodes[i]<<',';
		else
			cout<<intGreyCodes[i]<<']';
	}
}