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
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vi a(n);
		rep(i, 0, n) cin >> a[i];
		ll sum = 0;
		rep(i, 0, n) {
			sum += (long long)a[i];
		}
		int mn = 1e9 + 7, flag = 0;
		for (int i = n; i > 0; i--) {
			if (sum % i != 0) continue;
			flag = 1;
			int val = sum / i, count = 0, temp = 0;
			ll sum1 = 0;
			for (int j = 0; j < n; j++) {
				sum1 += (long long)a[j];
				if (sum1 > val) {
					count = n - 1;
					break;
				}
				temp++;
				if (sum1 == val) {
					count += temp - 1;
					sum1 = 0;
					temp = 0;
				}
			}
			mn = min(mn, count);
		}
		if (flag == 0) cout << n - 1 << "\n";
		else cout << mn << "\n";

	}




	return 0;
}
