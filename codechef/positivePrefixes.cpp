#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		if (n == 1 && k == 0) {
			cout << -1 << "\n";
			continue;
		}
		ll i = 1, curr_sum = 0;
		if (k <= n / 2) {
			bool flag = 1;
			while (k > 0) {
				if (flag) {
					cout << i << " ";
					curr_sum += i;
					i++;
					if (curr_sum == 0) {
						k--;
					}
					flag = 0;
				}
				else {
					cout << -i << " ";
					curr_sum += -i;
					i++;
					k--;
					flag = 1;
				}
				n--;
			}
			while (n > 0) {
				cout << -i << " ";
				i++;
				n--;
			}
			cout << "\n";
		}
		else {
			k = n - k;
			bool flag = 1;
			while (k > 0) {
				if (flag) {
					cout << -i << " ";
					curr_sum += -i;
					i++;
					k--;
					flag = 0;
				}
				else {
					cout << i << " ";
					curr_sum += i;
					i++;
					if (curr_sum == 0) {
						k--;
					}
					flag = 1;
				}
				n--;
			}
			while (n > 0) {
				cout << i << " ";
				i++;
				n--;
			}
			cout << "\n";
		}
	}

	return 0;
}