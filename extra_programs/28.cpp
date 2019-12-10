// Problem Link : https://codeforces.com/contest/152/problem/B

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
	
	ll n, m, a, b;
	cin >> n >> m;
	cin >> a >> b;
	ll k;
	cin >> k;
	ll count = 0;
	while(k--) {
		ll x, y, ans = INT_MAX;
		cin >> x >> y;
		if(x > 0) ans = min(ans, (n-a)/x);
		if(x < 0) ans = min(ans, (a-1)/-x);
		if(y > 0) ans = min(ans, (m-b)/y);
		if(y < 0) ans = min(ans, (b-1)/-y);
		count += ans;
		a += ans*x;
		b += ans*y;
	}
	
	cout << count << "\n";
	

	return 0;
}