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
	scanf("%lld", &t);
	while(t--) {
		ll n, q;
		scanf("%lld %lld", &n, &q);
		vl a(n);
		ll even = 0, odd = 0;
		repll(i, 0, n) {
			scanf("%lld", &a[i]);
			ll count = __builtin_popcount(a[i]);
			if(count%2 == 0)
				even++;
			else
				odd++;
		}

		repll(i, 0, q) {
			ll p, f_even = 0, f_odd = 0;
			scanf("%lld", &p);
			ll count = __builtin_popcount(p);
			if(count%2 == 0) {
				f_even = even;
				f_odd = odd;
			}
			else {
				f_even = odd;
				f_odd = even;
			}
			printf("%lld %lld\n", f_even, f_odd);
		}
	}


	return 0;
}