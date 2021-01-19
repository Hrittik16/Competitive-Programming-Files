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
		string s, s1;
		cin >> s;
		s1 += "1";
		char prev;
		if (s[0] == '0') prev = '1';
		else prev = '2';
		rep(i, 1, s.length()) {
			if (s[i] == '0') {
				if (prev == '2') {
					s1 += '1';
					prev = '1';
				}
				else if (prev == '1') {
					s1 += '0';
					prev = '0';
				}
				else if (prev == '0') {
					s1 += '1';
					prev = '1';
				}
			}
			else {
				if (prev == '2') {
					s1 += '0';
					prev = '1';
				}
				else if (prev == '1') {
					s1 += '1';
					prev = '2';
				}
				else if (prev == '0') {
					s1 += '1';
					prev = '2';
				}
			}
		}
		cout << s1 << "\n";
	}


	return 0;
}
