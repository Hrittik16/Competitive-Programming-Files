// Problem link : https://codeforces.com/contest/439/problem/B

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
	
	ll n, x;
	cin >> n >> x;
	vl c(n);
	repll(i, 0, n) cin >> c[i];	
	sort(all(c));
	ll total = 0;
	repll(i, 0, n) {
		if(x == 1) total += c[i]*x;
		else {
			total += c[i]*x;
			x--;
		}
	}

	cout << total << "\n";

	return 0;
}