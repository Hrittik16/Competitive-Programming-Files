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
	ll t, a, b, c, d;
	cin >> t;
	while(t--) {
		cin >> a >> b;
		if(a == b) {
			cout << "0\n";
			continue;
		}
		ll count = sol(a, b, 0);
		cout << count << "\n";
	}

	return 0;
}
