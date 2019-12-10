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
	
	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		map<ll, ll> mp;
		repll(i, 0, n) {
			ll x;
			cin >> x;
			mp[-x]++;
		}
		vector<ll> fre;
		for(auto x: mp) fre.pb(x.second);
		ll g = 0, s = 0, b = 0;
		g = fre[0];
		ll i = 1, flag = 0;
		while(s <= g && i < fre.size()) {
			s += fre[i];
			i++;
		}
		if(g < s) {
			while(b <= g && i < fre.size()) {
				b += fre[i];
				i++;
			}
			while(i < fre.size() && g+s+b+fre[i] <= n/2) {
				b += fre[i];
				i++;
			}
			if(g < b && g+s+b <= n/2) flag = 1;
		}
		if(flag) cout << g << " " << s << " " << b << "\n";
		else cout << "0 0 0\n";
	}

	
	return 0;
}
