#include <bits/stdc++.h>
#define ll long long int
#define inf 1e18
#define m_inf -1000000000000000000
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;

class graph {
	unordered_map<int,list<pair<int,ll> > > l;
public:

	void addedge(int city , int dest_city , ll weight) {
		l[city].push_back(make_pair(dest_city , weight));
		l[dest_city].push_back(make_pair(city , weight));

	}

	void print_hashmap_AdjList() {
		for (auto city : l) {
			cout << city.first << "->";
			for (auto nbr : city.second) {
				cout << "(" << nbr.first << "," << nbr.second << "),";
			}
			cout << endl;
		}
	}

	int modified_dfs_recursive(int src, ll &ans , map<int,int> &visited, int n) {
		visited[src] = 1;
		for (auto i : l[src]) {
			if (visited[i.first] == -1) {
				// auto node = i.second;

				int val = modified_dfs_recursive(i.first , ans , visited, n);
				ans += 2 * min(val , n - val) * (i.second);
				// cout << val << " ";
				visited[src] += val;
			}
		}

		return visited[src];

	}

	int modified_dfs(int src, int n) {
		map<int , int> visited;
		for (auto i : l) {
			visited[i.first] = -1;
		}
		ll ans = 0;
		modified_dfs_recursive(src , ans , visited, n);
		return ans;

	}
};

int main() {

	ll T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		ll n;
		cin >> n;
		graph g;
		for (int i = 0; i < n - 1; i++) {
			int x, y;
			ll w;
			cin >> x >> y >> w;
			g.addedge(x, y, w);
		}
		// g.print_hashmap_AdjList();
		cout << "Case #" << t << ": " << g.modified_dfs(1, n) << endl;



	}



}

