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
		ll n, a, b, c, d, e, f, g, h;
		cin >> n >> a >> b >> c >> d;
		e = a-b;
		f = a+b;
		g = c-d;
		h = c+d;
		if(e*n <= h && f*n >= g)
			cout << "Yes\n";
		else
			cout << "No\n";
	}








	return 0;
}
