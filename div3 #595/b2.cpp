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
 
	int q;
	cin >> q;
	while(q--) {
		ll n;
		cin >> n;
		vl a(n), b;
		map<int, int> mp;
		repll(i, 0, n) cin >> a[i];
		repll(i, 0, n) {
			ll temp = a[i], ans = 1;
			if(mp.count(a[i]) != 0) continue;
			while(temp != i+1) {
				ans++;
				b.pb(temp);
				temp = a[temp-1];
			}
			mp[a[i]] = ans;
			for(auto x: b) mp[x] = ans;
			b.clear();
		}
		for(auto x: mp) cout << x.second << " ";
		cout << "\n";
	}
 
 
 
		
 
	return 0;
}