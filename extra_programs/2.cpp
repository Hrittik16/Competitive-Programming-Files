// Problem link : https://codeforces.com/contest/816/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

const ll mx = 1e6+7;
ll a[mx];

int main() {
	
	ll n, k, q, x, y, sum = 0;
	cin >> n >> k >> q;
	repll(i, 0, n) {
		cin >> x >> y;
		a[x]++;
		a[y+1]--;
	}
	repll(i, 0, mx) {
		sum += a[i];
		a[i] = (sum >= k);
	}
	repll(i, 1, mx) {
		a[i] += a[i-1];
	}
	repll(i, 0, q) {
		cin >> x >> y;
		cout << a[y]-a[x-1] << "\n";
	}



	return 0;
}