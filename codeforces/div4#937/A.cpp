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
		if(a < b && b < c) cout << "STAIR\n";
		else if(a < b && b > c) cout << "PEAK\n";
		else cout << "NONE\n";
	}
	return 0;
}
