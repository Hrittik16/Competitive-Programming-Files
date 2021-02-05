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

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vi a(n), b(n), c(m);
		map<int, int> count3, pos;
		rep(i, 0, n) cin >> a[i];
		rep(i, 0, n) cin >> b[i];
		rep(i, 0, m) cin >> c[i];
		rep(i, 0, n) {
			pos[a[i]] = i;
		}
		rep(i, 0, m) count3[c[i]]++;
		bool flag = 1;
		map<int, vi> pos2;
		rep(i, 0, n) {
			if (a[i] != b[i]) {
				if (count3[b[i]] > 0) {
					count3[b[i]]--;
					pos2[b[i]].pb(i);
					if (pos.find(b[i]) == pos.end()) pos[b[i]] = i;
				}
				else {
					flag = 0;
					break;
				}
			}
		}

		//cout << "flag = " << flag << "\n";

		if (flag) {
			vi p;
			rep(i, 0, m) {
				if (i == 2 && count3.find(c[i]) != count3.end()) cout << "##\n";
				if (i == 2) cout << count3[c[i]] << "\n";
				if (count3.find(c[i]) != count3.end() && count3[c[i]] == 0) {
					if (i == 2) cout << "#\n";
					p.pb(pos2[c[i]].back());
					pos2[c[i]].pop_back();
				}
				else {
					if (pos.find(c[i]) == pos.end()) {
						if (i == 2) cout << "###\n";
						flag = 0;
						break;
					}
					p.pb(pos[c[i]]);
				}
			}
			if (flag) {
				cout << "YES\n";
				for (auto x : p) cout << x + 1 << " ";
				cout << "\n";
			}
			else cout << "NO\n";
		}
		else cout << "NO\n";

	}


	return 0;
}
