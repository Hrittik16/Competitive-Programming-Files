#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define all(x) x.begin(),x.end()

int main() {

	ll t, n, m;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		vl f(n), p(n);
		repll(i, 0, n)
			cin >> f[i];
		repll(i, 0, n)
			cin >> p[i];
		
		unordered_map<ll, ll> fre;
		repll(i, 0, n)
 			fre[f[i]] += p[i];

 		ll mn = INT_MAX;

 		for(auto x: fre) {
 			mn = min(mn, x.second);
 		}

 		cout << mn << "\n";

		}





	return 0;
}
