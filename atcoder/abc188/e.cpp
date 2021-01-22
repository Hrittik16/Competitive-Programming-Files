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
#define test				int T; cin >> T; while(T--)

void start() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
}

const int N = 2e5 + 7;
vi graph[N];
vi a(N);

int32_t main() {
	start();

	int n, m;
	cin >> n >> m;
	vi mn(n + 1, inf);
	rep(i, 0, n) cin >> a[i];
	rep(i, 0, m) {
		int p, q;
		cin >> p >> q;
		graph[p].pb(q);
	}
	int ans = -inf;
	rep(i, 1, n + 1) {
		for (auto x : graph[i]) {
			int u = i, v = x;
			mn[v] = min(mn[v], min(a[u - 1], mn[u]));
		}
		if (mn[i] != inf) ans = max(ans, a[i - 1] - mn[i]);
	}

	cout << ans << "\n";

	return 0;
}
