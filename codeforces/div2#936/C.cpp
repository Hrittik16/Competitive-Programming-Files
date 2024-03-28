#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define mp map<int, vi>

int n, k;
mp tree;

int32_t main() {

	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		rep(i, 0, n) {
			int u, v;
			cin >> u >> v;
			tree[u].pb(v);
		}
		int 
	}


	return 0;
}
