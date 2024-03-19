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
		int a, b, m;
		cin >> a >> b >> m;

		int x = (a+m)/a;
		int y = (b+m)/b;

		cout << x+y << "\n";
	}


	return 0;
}
