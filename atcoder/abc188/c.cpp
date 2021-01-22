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

int32_t main() {
	start();

	int n;
	cin >> n;
	n = 1 << n;
	vi a(n);
	map<int, int> index;
	rep(i, 0, n) cin >> a[i];
	rep(i, 0, n) index[a[i]] = i + 1;
	int mx1 = 0, mx2 = 0;
	rep(i, 0, n / 2) mx1 = max(mx1, a[i]);
	rep(i, n / 2, n) mx2 = max(mx2, a[i]);
	cout << index[min(mx1, mx2)] << "\n";

	return 0;
}
