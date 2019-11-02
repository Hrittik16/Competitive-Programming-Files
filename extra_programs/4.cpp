// Problem link : https://codeforces.com/contest/363/problem/B

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
	ll n, k, total = 0, mx = 1e18, index = 1;
	cin >> n >> k;
	vl a(n);
	repll(i, 0, n) cin >> a[i];
	vl pre(n+1, 0);
	repll(i, 0, n) {
		pre[i+1] = pre[i]+a[i];
	}
	ll i = k;
	while(1) {
		if(i > n) break;
		total = pre[i] - pre[i-k];
		//cout << "total = " << total << "\n";
		if(total <= mx) {
			mx = total;
			index = i-k+1;
		}	
		i++;
	}

	cout << index << "\n";

	return 0;
}