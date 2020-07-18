#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		if(n == 1 || n == 2) {
			cout << "1\n";
			continue;
		}
		else if(n%2 == 0) {
			cout << n/2 << "\n";
		}
		else {
			cout << n/2 + 1 << "\n";
		}
	}




	return 0;
}