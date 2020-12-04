#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t;
	cin >> t;
	while (t--) {
		ll a, b;
		cin >> a >> b;
		ll count_a_even = a / 2, count_b_even = b / 2;
		ll count_a_odd = a - count_a_even, count_b_odd = b - count_b_even;
		cout << (count_a_even * count_b_even) + (count_a_odd * count_b_odd) << "\n";
	}

	return 0;
}