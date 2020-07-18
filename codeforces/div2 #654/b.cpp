#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

	ll t;
	cin >> t;
	while(t--) {
		ll n, r, total = 0;
		cin >> n >> r;
		if(n > r) 
			total = (r*(r+1))/2;
		else
			total = ((n-1)*n)/2 + 1;
		cout << total << "\n";
	}


	return 0;
}