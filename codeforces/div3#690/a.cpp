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
		ll n;
		cin >> n;
		vl b(n), a(n, 0);
		repll(i, 0, n) cin >> b[i];
		ll j = n - 1, flag = 1, k = 0;
		for (ll i = 0; i < n; i++) {
			if (flag) {
				a[i] = b[k];
				flag = 0;
				k++;
			}
			else {
				a[i] = b[j];
				j--;
				flag = 1;
			}
		}
		for (auto x : a) cout << x << " ";
		cout << "\n";
	}




	return 0;
}
