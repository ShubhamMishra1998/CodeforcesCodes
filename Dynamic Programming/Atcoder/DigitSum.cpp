#include <bits/stdc++.h>

#define forn(i, n) for(int i=0; i<n; ++i)

using ll = long long;

using namespace std;

const int mod = 1e9 + 7;

void add_self(int &a, int b) {
	a += b;
	if(a >= mod)
		a -= mod;
}

void solve() {
	
	string k;
	cin >> k;

	int D;
	cin >> D;

	int len = k.size();

	vector<vector<int>>dp(D, vector<int>(2));

	dp[0][0] = 1;

	for(int where = 0; where < len; ++where) {
		vector<vector<int>> new_dp(D, vector<int>(2));

		for(int sum = 0; sum < D; ++sum) {	
			for(bool smaller_taken: { false, true }) {	// this cannot be made innermost for loop why?			
				for(int digit = 0; digit < 10; ++digit) {	

					if(digit > (k[where] - '0') && !smaller_taken) {
						break;
					}

					add_self(new_dp[(sum+digit) % D][smaller_taken || digit < (k[where] - '0')],
					 	dp[sum][smaller_taken]);
				}
			}
		}

		dp = new_dp;
	}

	int answer = (dp[0][false] + dp[0][true]) % mod;
	--answer;
 
	if(answer == -1)
		answer = mod - 1;

	cout << answer << "\n";

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
		solve();
	
}