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

const int maxN = 1e5 + 7;
int isPrime[maxN];

void prime() {
	memset(isPrime, 1, sizeof(isPrime));
	isPrime[0] = isPrime[1] = 0;
	for (int i = 2; i <= maxN; i++) {
		if (isPrime[i] && i * i <= maxN) {
			for (int j = i * i; j <= maxN; j += i) {
				isPrime[j] = 0;
			}
		}
	}
}

int32_t main() {
	prime();
	vi a;
	rep(i, 0, maxN) {
		if (isPrime[i]) a.pb(i);
	}

	int t;
	cin >> t;
	while (t--) {
		int d;
		cin >> d;
		auto it1 = lower_bound(all(a), d + 1) - a.begin();
		int num1 = a[it1];
		auto it2 = lower_bound(all(a), num1 + d) - a.begin();
		int num2 = a[it2];
		cout << num1*num2 << "\n";
	}


	return 0;
}