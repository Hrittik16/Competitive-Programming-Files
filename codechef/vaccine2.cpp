#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t;
	cin >> t;
	while (t--) {
		ll n, d;
		cin >> n >> d;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		ll beg = 0, end = n - 1, days = 0, count = 0;
		while (beg <= end) {
			count = d;
			bool flag = 0;
			// cout << "count = " << count << "\n";
			while (a[beg] <= 9) {
				beg++;
				count--;
				flag = 1;
				// cout << "beg = " << beg << "\n";
				if (count == 0)
					break;
			}
			// cout << "count = " << count << "\n";
			if (count == 0) {
				days++;
				// cout << "days = " << days << "\n";
				continue;
			}
			while (a[end] >= 80) {
				end--;
				count--;
				flag = 1;
				if (count == 0)
					break;
			}
			if (count == 0) {
				days++;
				continue;
			}
			// cout << "count = " << count << "\n";
			// cout << "days = " << days << "\n";
			if (flag) {
				days++;
				continue;
			}
			while (count != 0) {
				beg++;
				count--;
				if (count == 0) {
					days++;
					break;
				}
				end--;
				count--;
				if (count == 0) {
					days++;
					break;
				}
			}
		}

		cout << days << "\n";

	}

	return 0;
}