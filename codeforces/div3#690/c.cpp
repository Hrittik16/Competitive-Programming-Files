#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define all(a) (a).begin(),(a).end()
#define pb push_back

int main() {
	ll t;
	cin >> t;
	while (t--) {
		ll x;
		cin >> x;
		if (x < 10) {
			cout << x << "\n";
			continue;
		}
		if (x > 45) {
			cout << "-1\n";
			continue;
		}

		ll curr_num = 9;
		vl digits;
		while (x != 0) {
			digits.pb(curr_num);
			x -= curr_num;
			curr_num--;
			curr_num = min(curr_num, x);
		}
		sort(all(digits));
		for (auto x : digits) cout << x;
		cout << "\n";
	}
	return 0;
}
