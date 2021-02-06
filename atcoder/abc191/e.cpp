#include <bits/stdc++.h>
using namespace std;

#define int 				long long
#define f 					first
#define s 					second
#define pb 					push_back
#define mp 					make_pair
#define vi 					vector<int>
#define pii					pair<int, int>
#define mii					map<int, int>
#define all(a) 				(a).begin(),(a).end()
#define sz(x) 				(x).size()
#define rep(i, a, b) 		for(int i = a; i < b; i++)
#define pqb					priority_queue<int>
#define pqs					priority_queue<int, vi, greater<int>>
#define setbits(x)			__builtin_popcountll(x)
#define zerobits(x)			__builtin_ctzll(x) // counts number of leading 0's before 1st occurnace of 1
#define mod 				1000000007
#define inf					1e18+7
#define ps(x, y)			fixed << setprecision(y) << x
#define string_to_int(x)	stoi(x)
#define int_to_string(x)	to_string(x)
#define char_to_int(x)		x-'0'
#define int_to_char(x)		x+'0'

const int N = 1e5 + 7;

vector<pii> g[N];

void dfs(int beg, vector<bool>& vis, int total, int& curr, vi& ans) {
	if (beg == curr && vis[beg]) {
		ans.pb(total);
		return;
	}
	vis[beg] = 1;
	for (auto x : g[beg]) {
		if (!vis[x.f] || x.f == curr) {
			dfs(x.f, vis, total + (int)x.s, curr, ans);
		}
	}
}

void solve() {
	int n, m;
	cin >> n >> m;
	rep(i, 0, m) {
		int a, b, c;
		cin >> a >> b >> c;
		bool flag = 0;
		for (auto &x : g[a]) {
			if (x.f == b) {
				if (c < x.s) {
					x.s = c;
					flag = 1;
					break;
				}
			}
		}
		if (flag) continue;
		g[a].pb(make_pair(b, c));
	}

	rep(i, 1, n + 1) {
		vector<bool> vis(N);
		vi ans;
		int total = 0;
		dfs(i, vis, total, i, ans);
		if (ans.empty()) cout << "-1\n";
		else {
			int mn = inf;
			for (auto x : ans) {
				mn = min(mn, x);
			}
			cout << mn << "\n";
		}
	}

}

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	solve();

	return 0;
}
