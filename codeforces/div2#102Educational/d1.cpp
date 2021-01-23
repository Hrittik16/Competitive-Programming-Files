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

int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		string s;
		cin >> n >> m;
		cin >> s;

		int curr[n + 1], mn[n + 1], mx[n + 1];

		rep(i, 0, n + 1) {
			curr[i] = 0;
			mn[i] = 0;
			mx[i] = 0;
		}

		rep(i, 1, n + 1) {
			curr[i] = curr[i - 1];
			mn[i] = mn[i - 1];
			mx[i] = mx[i - 1];
			if (s[i - 1] == '-') curr[i]--;
			else curr[i]++;
			mn[i] = min(mn[i], curr[i]);
			mx[i] = max(mx[i], curr[i]);
			// cout << "curr[i] = " << curr[i] << " ";
			// cout << "mn[i] = " << mn[i] << " mx[i] = " << mx[i] << "\n";
		}

		// cout << "mn[n] = " << mn[n] << " mx[n] = " << mx[n] << "\n";

		rep(i, 0, m) {
			int l, r;
			cin >> l >> r;
			int total = abs(mx[l - 1] - mn[l - 1]) + 1;
			if (mx[n] > mx[r]) {
				if (mx[r + 1] != mx[l - 1])
					total += mx[n] - mx[r + 1] + 1;
				else total += mx[n] - mx[r + 1];
			}
			if (mn[n] < mn[r]) {
				if (mn[r + 1] != mn[l - 1])
					total += abs(mn[n] - mn[r + 1]) + 1;
				else total += abs(mn[n] - mn[r + 1]);
			}
			cout << total << "\n";
		}
	}

	return 0;
}