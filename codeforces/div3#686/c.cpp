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
		map<int, vector<int>> index;
		for (int i = 0; i < n; i++) {
			int num;
			cin >> num;
			index[num].push_back(i);
		}

		int mn = 1e9 + 7;

		if (index.size() == 1) {
			cout << "0\n";
			continue;
		}

		for (auto x : index) {
			int count = 0;
			if (x.second.size() == 1) {
				if (x.second[0] == 0 || x.second[0] == n - 1)
					mn = min(mn, 1);
				else
					mn = min(mn, 2);
				continue;
			}
			for (int i = 0; i < x.second.size(); i++) {
				if (i == 0) {
					if (x.second[i] >= 1) {
						count++;
						continue;
					}
				}
				if (i == x.second.size() - 1) {
					if (x.second[i] < n - 1)
						count++;
				}
				if (x.second[i] - x.second[i - 1 < 0 ? i : i - 1] > 1) {
					count++;
				}
			}

			mn = min(mn, count);
		}

		cout << mn << "\n";

	}


	return 0;
}