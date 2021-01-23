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
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

const int N = 2 * 100007;
int n;
vector<string> ans(4 * N);

void build(string s, int curr, int lc, int rc) {
	if (lc == rc) {
		ans[curr] = s[lc];
	}
	else {
		int mid = (lc + rc) / 2;
		build(s, curr * 2, lc, mid);
		build(s, curr * 2 + 1, mid + 1, rc);
		ans[curr] = ans[curr * 2] + ans[curr * 2 + 1];
	}
}

void query(int l, int r, int lc, int rc, int curr, string& str) {
	if (l > rc || r < lc) {
		str += ans[curr];
		return;
	}
	if (l <= lc && r >= rc) {
		return;
	}
	int mid = (lc + rc) / 2;
	query(l, min(r, mid), lc, mid, curr * 2, str);
	query(max(l, mid + 1), r, mid + 1, rc, curr * 2 + 1, str);
}

int32_t main() {
	//start();
	int t;
	cin >> t;
	while (t--) {
		int m;
		cin >> n >> m;
		string s;
		cin >> s;
		map<pair<int, int>, int> prev;
		build(s, 1, 0, n - 1);

		rep(i, 0, m) {
			int l, r;
			cin >> l >> r;
			if (prev.find({l, r}) != prev.end()) {
				cout << prev[ {l, r}] << "\n";
				continue;
			}
			string str;
			query(l, r, 1, n, 1, str);
			int total = 0, curr = 0;
			int mn = 0, mx = 0;
			for (auto x : str) {
				if (x == '-') curr--;
				else curr++;
				mn = min(mn, curr);
				mx = max(mx, curr);
			}
			if (!sz(s)) total = 1;
			else total = mx - mn + 1;
			cout << total << "\n";
			prev[ {l, r}] = total;
		}
	}



	return 0;
}
