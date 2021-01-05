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

int32_t main() {
	start();

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vi k(n), c(m);
		rep(i, 0, n) cin >> k[i];
		rep(i, 0, m) cin >> c[i];

		sort(k.rbegin(), k.rend());

		int curr = 0, total = 0;
		rep(i, 0, n) {
			if (c[curr] < c[k[i] - 1]) {
				total += c[curr];
				curr++;
			}
			else {
				total += c[k[i] - 1];
			}
		}
		cout << total << "\n";
	}



	return 0;
}