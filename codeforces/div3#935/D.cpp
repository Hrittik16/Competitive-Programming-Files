#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define pii pair<int, int>

map<pii, int> mp;

int f(vi& a, vi& b, int curr_a, int curr_b, int n, int m) {
	if(curr_a == n-1) {
		return a[curr_a];
	}
	if(n-curr_a <= m) {
		return min(a[curr_a], b[curr_b]+f(a, b, curr_a+1, curr_b+1, n, m));
	}
	
	if(mp.find(make_pair(curr_a, curr_b)) != mp.end()) return mp[make_pair(curr_a, curr_b)];
	mp[make_pair(curr_a, curr_b)] = min(a[curr_a]+f(a, b, curr_a+1, curr_b+1, n, m), b[curr_b]+f(a, b, curr_a+1, curr_b+1, n, m));
	return mp[make_pair(curr_a, curr_b)];
}

int32_t main() {

	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		vi a(n), b(n);
		rep(i, 0, n) cin >> a[i];
		rep(i, 0, n) cin >> b[i];

		reverse(all(a));
		reverse(all(b));
		
		mp.clear();

		int coins = f(a, b, 0, 0, n, m);
		cout << coins << "\n";
	}


	return 0;
}
