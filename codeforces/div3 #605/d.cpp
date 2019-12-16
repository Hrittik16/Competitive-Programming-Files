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
	ll n, i, j;
	cin >> n;
	vl a(n, 0);
	repll(i, 0, n) cin >> a[i];
	vl l(n, 1), r(n, 1);
	for(i = n-2; i >= 0; i--) {
		if(a[i] < a[i+1]) l[i] = l[i+1]+1;
	}
	for(i = 1; i < n; i++) {
		if(a[i] > a[i-1]) r[i] = r[i-1]+1;
	}

	ll mx = 1;

	for(i = 0; i < n; i++) {
		if(i == 0) mx = max(mx, max(l[i], l[i+1]));
		else if(i == n-1) mx = max(mx, max(r[i], r[i-1]));
		else if(a[i+1] > a[i-1]) mx = max(mx, max((r[i]+l[i]-1), r[i-1]+l[i+1]));
	}

	cout << mx << "\n";

	return 0;
}
