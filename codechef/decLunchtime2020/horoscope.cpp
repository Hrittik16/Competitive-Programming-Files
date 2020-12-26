#include <bits/stdc++.h>
using namespace std;

// #define int 				long long
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

bool checkk(vector<vector<int>>& a, int x, int y, int n, int m) {
	bool flag = 1;

	rep(i, 0, m - 1) {
		rep(j, 0, n - 1) {
			if (i == m - 1 || j == n - 1) break;
			if (a[j][i] != a[j + 1][i + 1]) {
				flag = 0;
				break;
			}
		}
	}

	return flag;
}

int main() {
	// start();

	int t;
	cin >> t;
	// cout << "#\n";
	while (t--) {
		int n, m;
		cin >> n >> m;
		// cout << "#\n";
		vector<vector<int>> a(n);
		rep(i, 0, n) {
			rep(j, 0, m) {
				int p;
				cin >> p;
				a[i].pb(p);
			}
		}
		// cout << "#\n";
		int q;
		cin >> q;
		while (q--) {
			// cout << "#\n";
			int x, y, v;
			cin >> x >> y >> v;
			a[--x][--y] = v;
			if (checkk(a, x, y, n, m)) cout << "Yes\n";
			else cout << "No\n";
		}
	}



	return 0;
}
