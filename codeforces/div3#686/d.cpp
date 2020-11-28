#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

bool isPrime(ll n) {
	vector<char> is_prime(n + 1, true);
	is_prime[0] = is_prime[1] = false;
	for (ll i = 2; i <= n; i++) {
		if (is_prime[i] && i * i <= n) {
			for (ll j = i * i; j <= n; j += i)
				is_prime[j] = false;
		}
	}
	return is_prime[n];
}

int main() {

	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		// cout << "n = " << n << "\n";
		vector<ll> divisors;
		if (isPrime(n)) {
			cout << "1\n";
			cout << n << "\n";
			continue;
		}
		else if (n % 2 == 0) {
			while (1) {
				if (n <= 1) break;
				if ((n / 2) % 2 != 0) {
					divisors.pb(n);
					break;
				}
				else {
					divisors.pb(2);
					n /= 2;
				}
			}
		}
		else {
			for (ll i = 3; i <= n / 2; i += 2) {
				while (n % i == 0) {
					if ((n / i) % i != 0) {
						divisors.pb(n);
						break;
					}
					else {
						divisors.pb(i);
						n /= i;
					}
				}
			}
		}

		cout << divisors.size() << "\n";
		for (auto x : divisors) cout << x << " ";
		cout << "\n";
	}


	return 0;
}
