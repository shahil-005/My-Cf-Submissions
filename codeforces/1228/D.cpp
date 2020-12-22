//bitset solution
//https://codeforces.com/blog/entry/70162?#comment-546675
//Pending

#include <bits/stdc++.h>
#include <stdio.h>
 
using namespace std;
 
// #define int long long
 
void solve();

signed main () {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
	#endif
	int t = 1; 
	// cin >> t;
	int tt = t;
	while (t--) { 
		solve();
	}
	return 0;
}
const int N = 1e5 + 5;
vector<int> adj[N];
vector<bitset<N>> v;
int which[N];
int n, m;
void solve() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= m; i += 1) {
		int a, b;
		scanf("%d%d", &a, &b);
		--a, --b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 0; i < n; i += 1) {
		bitset<N> new_b;
		for (auto j : adj[i]) {
			new_b[j] = 1;
		}
		bool found = false;
		for (int j = 0; j < (int) v.size(); j += 1) {
			if (new_b == v[j]) {
				which[i] = j;
				found = true;
				break;
			}
		} 
		if (!found and v.size() == 3) {
			printf("-1");
			return;
		} 
		if (found)
			continue;
		v.push_back(new_b);
		which[i] = (int) v.size() - 1;
	}
	if ((int) v.size() <= 2) {
		cout << -1;
		return;
	}
	for (int i = 0; i < n; i += 1) {
		if (v[which[i]][i]) {
			cout << -1;
			return;
		}
		for (int j = 0; j < 3; j += 1) {
			if (j == which[i])
				continue;
			if (!v[j][i]) {
				cout << -1;
				return;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << which[i] + 1 << ' ';
	}
}		
