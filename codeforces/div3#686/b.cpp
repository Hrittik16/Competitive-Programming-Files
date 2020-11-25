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
		map<int, int> index;
		vector<int> num;
		unordered_map<int, int> check;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			check[a[i]]++;
			index[a[i]] = i + 1;
		}

		for (auto x : check) {
			if (x.second == 1)
				num.push_back(x.first);
		}

		if (num.empty())
			cout << "-1\n";
		else {
			int mx = 1e9;
			for (int i = 0; i < num.size(); i++) {
				if (num[i] < mx)
					mx = num[i];
			}
			cout << index[mx] << "\n";
		}

	}


	return 0;
}