#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
	ll n, m;
	cin >> n >> m;
	if (n <= m) {
		cout << n << endl;
	} else {
		n -= m;
		ll l = 0, r = 2e9;
		while (l < r) {
			ll m = (l + r) / 2;
			ll val = m * (m+1) / 2;
			if (val >= n) {
				r = m;
			} else {
				l = m+1;
			}
		}
		cout << l + m << endl;
	}
}