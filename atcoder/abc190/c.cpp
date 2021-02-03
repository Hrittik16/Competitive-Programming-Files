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

int n, m, k;
vi vec;
vector<pii> c, d;

int recurse(vector<pii>& d, int curr) {
	if (curr >= sz(d)) {
		set<int> st;
		for (auto x : vec) st.insert(x);
		int count = 0;
		rep(i, 0, m) {
			auto it = c[i];
			if (st.find(it.f) != st.end() && st.find(it.s) != st.end()) count++;
		}
		return count;
	}
	auto it = d[curr];
	vec.pb(it.f);
	int rec1 = recurse(d, curr + 1);
	vec.pop_back();
	vec.pb(it.s);
	int rec2 = recurse(d, curr + 1);
	vec.pop_back();
	return max(rec1, rec2);
}

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> n >> m;
	rep(i, 0, m) {
		int a, b;
		cin >> a >> b;
		c.pb({a, b});
	}

	cin >> k;
	rep(i, 0, k) {
		int a, b;
		cin >> a >> b;
		d.pb({a, b});
	}

	int ans = recurse(d, 0);
	cout << ans << "\n";

	return 0;
}
