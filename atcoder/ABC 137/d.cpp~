#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector< vi >
#define vvl vector< vl >
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector< pii >
#define vpll vector< pll >
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back
#define F first
#define S second
#define string_to_int(s) stoi(s)
#define string_to_ll(s) stoll(s)
#define int_to_string(n) to_string(n)
#define ll_to_string(n) to_string(n)
#define char_to_int(c) c-'0'
#define int_to_char(c) c+'0'
int main() {
	ll n, m;
	cin >> n >> m;
	vector< pair<ll, ll> > vp;
	repll(i, 0, n) {
		ll x, y;
		cin >> x >> y;
		vp.pb({x, y});
	}
	
	sort(all(vp), [](pair<ll, ll> a, pair<ll, ll> b) { if(a.second == b.second)
								return a.first > b.first;
							   else
								return a.second > b.second; } );
	ll total = 0, i = 0, val = m;
	for(auto x: vp) {
		if(x.first <= m-i) {
			//cout << "x.first = " << x.first << " x.second = " << x.second << "\n";
			total += x.second;
			i++;
			val--;
		}
		if(val == 0) break;
	}
	cout << total << "\n";

	return 0;
}
