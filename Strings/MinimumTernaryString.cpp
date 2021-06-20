#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	
	string ans;
	
	int cnt = 0;
	for (auto c : s) {
		if (c == '1') ++cnt;
		else ans += c;
	}
	
	int n = ans.size();
	int pos = -1;
	while (pos + 1 < n && ans[pos + 1] == '0') ++pos;
	ans.insert(pos + 1, string(cnt, '1'));
	
	cout << ans << endl;
	
}