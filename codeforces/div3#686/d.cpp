#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {

	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		bool prime = true;
		vector<ll> divisors;
		if (n == 2 || n == 3) {
			cout << "1\n";
			cout << n << "\n";
			continue;
		}
		for (ll i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				// cout << "i = " << i << "\n";
				prime = false;
				break;
			}
		}
		// cout << "Prime = " << prime << "\n";
		if (prime) {
			cout << "1\n";
			cout << n << "\n";
			continue;
		}
		for (ll i = 2; i <= sqrt(n); i++) {
			vector<ll> d;
			ll n_dup = n;
			while (n_dup % i == 0) {
				if ((n_dup / i) % i != 0) {
					d.pb(n_dup);
					break;
				}
				else {
					d.pb(i);
					n_dup /= i;
				}
			}
			if (d.size() > divisors.size())
				divisors = d;
		}

		cout << divisors.size() << "\n";
		for (auto x : divisors) cout << x << " ";
		cout << "\n";
	}


	return 0;
}
