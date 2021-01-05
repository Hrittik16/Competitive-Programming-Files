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

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	cout << "a -> ";
	cout << a.first << " " << a.second << "\n";
	cout << "b -> ";
	cout << b.first << " " << b.second << "\n";
	cout << "result -> ";
	bool result = (a.first > b.first && a.second > b.second);
	cout << result << "\n";
	return (a.first < b.first && a.second < b.second);
}

int32_t main() {

	start();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<pair<int, int >> m1;
		vector<pair<int, int>> m2;
		vector<pair<int, int>> v;
		map<pair<int, int>, int> index;
		rep(i, 0, n) {
			int a, b;
			cin >> a >> b;
			if (index.find({a, b}) == index.end()) {
				index[ {a, b}] = i;
				index[ {b, a}] = i;
			}
			v.pb({a, b});
			m1.pb({a, b});
			m2.pb({b, a});
		}

		sort(m1.rbegin(), m1.rend());
		sort(m2.rbegin(), m2.rend());


		for (auto x : m1) cout << x.first << " " << x.second << "\n";

		rep(i, 0, n) {
			auto it1 = upper_bound(all(m1), make_pair(v[i].first, v[i].second), cmp);
			cout << "it1.first = " << (*it1).first << " " << "it1.second = " << (*it1).second << "\n";
			if (it1 != m1.end()) {
				cout << index[ {(*it1).first, (*it1).second}] + 1 << " ";
				continue;

			}

			auto it2 = upper_bound(all(m2), make_pair(v[i].first, v[i].second), cmp);
			// cout << "it2.first = " << (*it2).first << " " << "it2.second = " << (*it2).second << "\n";

			if (it2 != m2.end()) {
				cout << index[(*it2)] + 1 << " ";
				continue;

			}
			cout << "-1 ";
		}
		cout << "\n";
	}



	return 0;
}