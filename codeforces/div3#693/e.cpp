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

int n;
vector<pair<pii, int>> a; // {{h, w}, index}

int32_t main() {

	start();
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		a.clear();
		rep(i, 0, n) {
			int h, w;
			cin >> h >> w;
			a.pb({{w, -h}, i});
			a.pb({{h, -w}, i});
		}

		sort(all(a));
		// sorted in increasing width and decreasing height(when widths are equal)
		// eg. vector<pii> a = {{3, -4}, {2, -1}, {3, -3}};
		// After sorting a = {{2, -1}, {3, -4}, {3, -3}};
		// Now if 3 would have come before 4 then 4 would consider 3 as a valid option but
		// since their width are equal 4 cannot consider 3 as height. So, sorting by decreasing
		// height is important for equal widths

		// for (auto x : a) cout << x.f.f << " " << x.f.s << " " << x.s << "\n";

		int mn = inf, index_mn = 0;
		vi ans(n, -1);
		rep(i, 0, sz(a)) {
			int w = a[i].f.f;
			int h = -a[i].f.s;
			int index = a[i].s;
			if (h > mn) {
				ans[index] = index_mn + 1;
			}
			else {
				mn = h;
				index_mn = index;
			}
		}

		for (auto x : ans) cout << x << " ";
		cout << "\n";

	}



	return 0;
}