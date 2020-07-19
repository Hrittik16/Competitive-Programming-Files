#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll a, b, n, m;
		cin >> a >> b >> n >> m;
		if(m <= min(a, b)) {
			if(m+n <= a+b)
				cout << "Yes\n";
			else 
				cout << "No\n";
		}
		else
			cout << "No\n";
	}



	return 0;
}