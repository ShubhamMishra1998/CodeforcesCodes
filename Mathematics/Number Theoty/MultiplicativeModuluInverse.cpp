#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll x, y, GCD;
void EED(ll a, ll b) {
	// Base Case:
	if (b == 0) {
		x = 1, y = 0;
		GCD = a;
		return;
	}
	EED(b, a % b);
	int current_x = y;
	int current_y = x - ((a / b) * y);
	x = current_x;
	y = current_y;

}

ll inverseModulo(ll a, ll m) {
	if (__gcd(a, m) != 1) {
		return 0;
	}
	EED(a, m);
	return (x + m) % m;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a = 30, b = 18;
	EED(a, b);
	cout << x << " " << y << endl;
	cout << inverseModulo(11, 7);
	return 0;
}
