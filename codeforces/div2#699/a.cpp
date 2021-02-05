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
		int x, y;
		cin >> x >> y;
		string s;
		cin >> s;
		int up = 0, down = 0, right = 0, left = 0;
		for (auto x : s) {
			if (x == 'R') right++;
			if (x == 'L') left++;
			if (x == 'U') up++;
			if (x == 'D') down++;
		}
		if (x < 0) {
			if (left >= abs(x)) {
				if (y < 0) {
					if (down >= abs(y)) cout << "YES\n";
					else cout << "NO\n";
				}
				else {
					if (up >= y) cout << "YES\n";
					else cout << "NO\n";
				}
			}
			else cout << "NO\n";
		}
		else {
			if (right >= x) {
				if (y < 0) {
					if (down >= abs(y)) cout << "YES\n";
					else cout << "NO\n";
				}
				else {
					if (up >= y) cout << "YES\n";
					else cout << "NO\n";
				}
			}
			else cout << "NO\n";
		}
	}



	return 0;
}
