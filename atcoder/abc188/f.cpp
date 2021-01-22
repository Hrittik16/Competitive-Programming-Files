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

map<int, int> dp;

int calculate(int x, int y) {
	if (y <= x) {
		dp[y] = x - y;
	}
	if (dp.find(y) != dp.end()) return dp[y];
	if (y & 1) {
		int ff = 1 + calculate(x, y - 1);
		int ss = 1 + calculate(x, y + 1);
		dp[y] = min(ff, ss);
	}
	else dp[y] = min(y - x, 1 + calculate(x, y / 2));
	return dp[y];
}

int32_t main() {
	start();

	int x, y;
	cin >> x >> y;

	if (y <= x) {
		cout << x - y << "\n";
		return 0;
	}

	int count = calculate(x, y);

	cout << count << "\n";

	return 0;
}
