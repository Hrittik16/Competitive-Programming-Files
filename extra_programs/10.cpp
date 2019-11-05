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
	ll n, k, x, y, total = 0;
	cin >> n >> k;
	vector<pair<pair<ll, ll>, ll>> vp;
	repll(i, 0, n) {
		cin >> x >> y;
		ll z = min(2*x, y) - min(x, y);
		vp.pb({{x, y}, z});
	}
	sort(all(vp), [](const pair<pair<ll, ll>, ll> a, const pair<pair<ll, ll>, ll> b) { return a.second > b.second; });
	//cout << "vp = \n";
	for(auto x: vp) {
		//cout << x.first.first << " " << x.first.second << "\n";
		if(x.first.first == 0) continue;
		if(k == 0) {
			total += min(x.first.first, x.first.second);
		}
		else {
			total += min(2 * x.first.first, x.first.second);
			k--;
		}
	}

	cout << total << "\n";

	return 0;
}