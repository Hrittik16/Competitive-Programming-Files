#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int32_t main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		int i = 0;
		while(a[i] == a[i+1]) {
			i++;
			if(i == n-1) break;
		}
		if(i == n-1) {
			cout << "-1\n";
		}
		else {
			cout << i+1 << " " << n-i-1 << "\n";
			for(int j = 0; j <= i; j++)
				cout << a[j] << " ";
			cout << "\n";
			for(int j = i+1; j < n; j++)
				cout << a[j] << " ";
			cout << "\n";
		}
	}
}
