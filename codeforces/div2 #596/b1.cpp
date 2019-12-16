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
		ll n, k, d;
		cin >> n >> k >> d;
		vl a(n);
		ll mx = (ll)1e9+7;
		repll(i, 0, n) cin >> a[i];
		for(ll i = 0; i < n; i++) {
			set<ll> st;
			if(i+d > n) break;
			for(ll j = i; j < i+d; j++) {
				st.insert(a[j]);
			}
			mx = min((ll)mx, (ll)st.size());
			st.clear();
		}
		cout << mx << "\n";
	}
 
 
	return 0;
}