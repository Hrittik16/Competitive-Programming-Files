#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll n, k, sum = 0;
	cin >> n >> k;
	vector<ll> v(n);
	for(ll i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	for(ll i = 0; i < k; i++)
		sum += v[i];

	cout << sum << "\n";

	return 0;
}