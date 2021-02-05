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

void solve() {
	int n, m;
	cin >> n >> m;
	vi a(n), b(n), c(m), req(n + 1), mxreq(n + 1), avail(n + 1);
	vi index[n + 1], last(n + 1);
	rep(i, 0, n) cin >> a[i];
	rep(i, 0, n) {
		cin >> b[i];
		if (a[i] != b[i]) req[b[i]]++, index[b[i]].pb(i);
		mxreq[b[i]]++;
		last[b[i]] = i;
	}
	rep(i, 0, m) {
		cin >> c[i];
		avail[c[i]]++;
	}

	rep(i, 1, n + 1) {
		if (avail[i] < req[i]) {
			cout << "NO\n";
			return;
		}
	}

	if (mxreq[c[m - 1]] == 0) {
		cout << "NO\n";
		return;
	}

	cout << "YES\n";

	int same;

	if (index[c[m - 1]].empty()) same = last[c[m - 1]];
	else same = index[c[m - 1]][0];

	rep(i, 0, m) {
		if (index[c[i]].empty()) cout << same + 1 << " ";
		else {
			cout << index[c[i]].back() + 1 << " ";
			index[c[i]].pop_back();
		}
	}
	cout << "\n";
}

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
