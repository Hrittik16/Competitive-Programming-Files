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

	ll n;
	cin >> n;
	ll x = sqrt(n), a = 1, b = n;
	ll sum = 1e18;
	repll(i, 1, x+1) {
		if(n%i != 0)
			continue;
		ll y = n/i;
		if(__gcd(y, i) != 1)
			continue;
		if(max(y, i) < sum) {
			sum = max(y, i);
			a = i;
			b = y;
		}
	}

	cout << a << " " << b << "\n";


	return 0;
}