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
		ll n, pos = 0, neg = 0, zero = 0;
		cin >> n;
		vl a(n);
		repll(i, 0, n) 
			cin >> a[i];
		repll(i, 0, n) {
			if(a[i] == 0)
				zero++;
			else if(a[i] < 0)
				neg += a[i];
			else 
				pos += a[i];
		}
		pos += zero;
		if(neg+pos == 0) 
			cout << zero+1 << "\n";
		else
			cout << zero << "\n";
	}


	return 0;
}