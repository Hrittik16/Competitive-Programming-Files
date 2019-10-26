#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back
 
void update(map<ll, ll>& c) {
	for(auto it = c.begin(); it != c.end(); ) {
        if(it->second == 0)
            it = c.erase(it);
        else
            ++it;
    }
}
 
int main() {
 
	ll t;
	cin >> t;
	while(t--) {
		ll n, k, d;
		cin >> n >> k >> d;
		vl a(n);
		ll mx = (ll)1e9+7;
		repll(i, 0, n) cin >> a[i];
		map<ll, ll> st;
		ll first = a[0], index = 0;
		for(ll i = 0; i < d; i++) {
				st[a[i]]++;
		}
		mx = min((ll)mx, (ll)st.size());
		for(ll j = d; j < n; j++) {
			st[first]--;
			if(st[first] < 1) {
				st.erase(first);
			}
			st[a[j]]++;
			//update(st);
			mx = min((ll)mx, (ll)st.size());
			index++;
			first = a[index];
		}
		cout << mx << "\n";
	}
 
 
	return 0;
}