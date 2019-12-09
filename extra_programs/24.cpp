// Problem Link : https://codeforces.com/contest/469/problem/B

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
	int p, q, l, r;
	cin >> p >> q >> l >> r;
	vector<int> a(p), b(p), c(q), d(q);
	rep(i, 0, p) cin >> a[i] >> b[i];
	rep(i, 0, q) cin >> c[i] >> d[i];
	int flag = 0, count = 0;
	rep(i, l, r+1) {
		flag = 0;
		rep(j, 0, p) {
			rep(k, 0, q) {
				rep(x, c[k], d[k]+1) {
					if(x+i >= a[j] && x+i <= b[j]) {
						flag = 1;
						break;
					}
				} 
				if(flag) break;
			}
			if(flag) {
				count++;
				break;
			}
		}
	}

	cout << count << "\n";

	return 0;
}
