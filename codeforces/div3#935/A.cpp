#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define rep(i, a, b) for(int i = a; i < b; i++)

int32_t main() {
	int t;
	cin >> t;
	while(t--) {
		int a, b, c;
		cin >> a >> b >> c;
		int total = 0;
		if(b%3 != 0) {
			int rem = b%3;
			if(rem + c < 3) {
				cout << "-1\n";
				continue;
			}
			else {
				c -= 3 - rem;
				total = a + b/3 + 1 + ceil((double)c/3);
			}
		}
		else {
			total = a + b/3 + ceil((double)c/3);
		}
		cout << total << "\n";
	}



	return 0;
}
