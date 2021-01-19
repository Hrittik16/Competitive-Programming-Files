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

void start() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

int32_t main() {
	start();

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vi a(2 * n);
		multiset<int> mp;
		rep(i, 0, 2 * n) {
			cin >> a[i];
			mp.insert(a[i]);
		}
		sort(all(a));
		int curr = a[a.size() - 1];
		int temp = curr;
		mp.erase(curr);
		while (1) {
			int flag = 0;
			rep(i, 0, a.size()) {
				if (mp.find(a[i]) == mp.end()) continue;
				if (mp.find(abs(curr - a[i])) != mp.end()) {
					auto it1 = mp.find(curr - a[i]);
					auto it2 = mp.find(a[i]);
					auto it3 = mp.find(curr);
					mp.erase(it1);
					mp.erase(it2);
					mp.erase(it3);
					curr = max(a[i], curr - a[i]);
					cout << "curr " << curr << "\n";
					flag = 1;
					break;
				}
			}
			if (flag == 0) break;
		}

		for (auto x : mp) cout << x << " ";
		cout << "\n";

		if (mp.size() == 1) {
			cout << "YES\n";
			int p;
			for (auto x : mp) p = x;
			int ans = p + temp;
			cout << ans << "\n";
		}
		else cout << "NO\n";
	}



	return 0;
}
