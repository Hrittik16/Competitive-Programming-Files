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
		vl p(n), q(n+1);
		repll(i, 0, n) cin >> p[i], q[p[i]] = i+1;
		string s;
		ll mn = 1e9, mx = 0;
		repll(i, 1, n+1) {
			mn = min(mn, q[i]);
			mx = max(mx, q[i]);
			if(mx-mn+1 == i) s += "1";
			else s += "0";
		}
		cout << s << "\n";
	}

	
	return 0;
}
