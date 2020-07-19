#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll n, k;
		cin >> n >> k;
		ll num = 0;
		ll zeros = min(n*n-k, k);
		if(k <= n*n-k)
			num = 1;
		vector<vector<ll>> a(n, vector<ll>(n, num?0:1));
		for(ll i = 0; i < n; i++) {
			if(zeros == 0)
				break;
			a[i][i] = num;
			zeros--;
		}
		for(ll j = n-1, i = 0; j >= 0; j--) {
			if(zeros == 0)
				break;
			if(a[i][j] == num) {
				i++;
				continue;
			}
			a[i++][j] = num;
			zeros--;
		}
		bool turn = 1;
		ll x_row = 1, x_col = 0, y_row = 0, y_col = 1;
		while(1) {
			if(zeros == 0) break;
			if(turn) {
				for(ll i = x_row, j = x_col; i < n; i++) {
					if(zeros == 0) break;
					if(a[i][j] == num) {
						j++;
						continue;
					}
					a[i][j++] = num;
					zeros--;
				}
				x_row++;
				turn = 0;
			}
			else {
				for(ll j = y_col, i = y_row; j < n; j++) {
					if(zeros == 0)
						break;
					if(a[i][j] == num) {
						i++;
						continue;
					}
					a[i++][j] = num;
					zeros--;
				}
				y_col++;
				turn = 1;
			}
		}

		ll r_max = -1, r_min = 1e9+7, c_max = -1, c_min = 1e9+7;
		for(ll i = 0; i < n; i++) {
			ll total = 0;
			for(ll j = 0; j < n; j++) {
				total += a[i][j];
			}
			if(total > r_max)
				r_max = total;
			if(total < r_min)
				r_min = total;
		}
		for(ll j = 0; j < n; j++) {
			ll total = 0;
			for(ll i = 0; i < n; i++) {
				total += a[i][j];
			}
			if(total > c_max)
				c_max = total;
			if(total < c_min)
				c_min = total;
		}

		ll ans = (r_max-r_min)*(r_max-r_min) + (c_max-c_min)*(c_max-c_min);
		cout << ans << "\n";

		for(ll i = 0; i < n; i++) {
			for(ll j = 0; j < n; j++)
				cout << a[i][j];
			cout << "\n";
		}
	}



	return 0;
}