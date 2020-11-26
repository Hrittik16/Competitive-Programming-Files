#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		unordered_map<int, int> fre;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			fre[a[i]]++;
		}

		int index = -1;
		for (int i = 0; i < n; i++) {
			if (fre[a[i]] == 1 && (index == -1 || a[index] > a[i]))
				index = i;
		}

		if (index == -1)
			cout << "-1\n";
		else
			cout << index + 1 << "\n";

	}


	return 0;
}