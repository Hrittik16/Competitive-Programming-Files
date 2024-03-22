#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		vector<int> a(n), b(n);
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) cin >> b[i];
		
		int total = 1e18+7, best = 0;
		for(int i = n-1; i >= 0; i--) {
			if(i < m) {
				total = min(total, a[i] + best);	
			}
			best += min(a[i], b[i]);
		}
		cout << total << "\n";
	}
	return 0;               
}
