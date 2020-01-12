#include <bits/stdc++.h>
using namespace std;
int main() {
	ll k, x, i, j;
	cin >> k >> x;
	if(x-k-1 < -2000000) {
		for(i = -2000000; i <= x; i++) {
			cout << i << " ";
		}	
		if(x+k-1 > 2000000) {
			for(j = x+1; j <= 2000000; j++)
				cout << j << " ";
		}
		else {
			for(j = x+1; j <= x+k-1; j++) 
				cout << j << " ";
		}
	}
	else {
		for(i = x-k+1; i <= x; i++) {
			cout << i << " ";
		}
		if(x+k-1 > 2000000) {
			for(j = x+1; j <= 2000000; j++)
				cout << j << " ";
		}
		else {
			for(j = x+1; j <= x+k-1; j++) 
				cout << j << " ";
		}
	}
	
	cout << "\n";


	return 0;
}
