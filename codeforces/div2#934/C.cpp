#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) x.begin(), x.end()

int32_t main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n; 
		vi a(n);
		int fre[200005]{0};
		rep(i, 0, n) {
			cin >> a[i];
			fre[a[i]]++;
		}
		int excess = 0, count = 0;
		rep(i, 0, 200005) {
			if(fre[i] == 0) {
				cout << i << "\n";
				break;
			}
			if(fre[i] == 1 && count == 0) {
				count++;
			}
			else if(fre[i] == 1 && count == 1) {
				cout << i << "\n";
				break;
			}
		}
	}
}
