#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());

		int k = (n+1)/2 - 1;
		int count = 1;
		for(int i = k+1; i < n; i++) {
			if(a[i] == a[k]) count++;
			else break;
		}
		cout << count << "\n";
	}
	return 0;               
}
