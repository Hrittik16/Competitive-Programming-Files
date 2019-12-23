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
			vl a(n);
			repll(i, 0, n) {
				cin >> a[i];
				mp[a[i]]++;
			}
			ll count = 0;
			for(auto x: mp) {
				count = max(count, x.second);
			}
			cout << n-count << "\n";
		}	



	

	return 0;
}