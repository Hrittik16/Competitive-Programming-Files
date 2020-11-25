#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input3.txt", "r", stdin);
	freopen("output3.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> fre(n, 0);
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			fre[a[i] - 1]++;
		}
		if (a[0] == a[n - 1]) {
			int total = fre[a[0] - 1] - 1;

		}
	}


	return 0;
}