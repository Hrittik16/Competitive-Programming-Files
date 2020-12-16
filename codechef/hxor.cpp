#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define all(x) x.begin(),x.end()

ll highest_bit(ll n) {
	return log2(n);
}

int main() {

	ll t;
	cin >> t;
	while (t--) {
		ll n, x;
		cin >> n >> x;
		vl a(n);
		repll(i, 0, n) cin >> a[i];
		ll i = 0, j = 0, p = 0;
		while (i < n - 1) {
			if (a[i] == 0) {
				i++;
				continue;
			}
			if (x <= 0) break;
			bool flag = 0;
			for (j = i + 1; j < n; j++) {
				if (a[j] & (1 << highest_bit(a[i]))) {
					x--;
					p = highest_bit(a[i]);
					a[i] = a[i] ^ (1 << p);
					a[j] = a[j] ^ (1 << p);
					flag = 1;
					break;
				}
			}
			if (!flag) {

				p = highest_bit(a[i]);
				a[i] = a[i] ^ (1 << p);
				a[n - 1] = a[n - 1] ^ (1 << p);
				x--;

			}
			if (a[i] == 0) {
				i++;
			}
		}
		if (x > 0) {
			if (x % 2 == 0) break;
			else {
				a[n - 1] = a[n - 1] ^ 1;
				a[n - 2] = a[n - 2] ^ 1;
				break;
			}
		}
		for (auto i : a) cout << i << " ";
		cout << "\n";
	}


	return 0;
}