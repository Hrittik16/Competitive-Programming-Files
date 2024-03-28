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
		int n;
		cin >> n;
		vector<vector<char>> g(2*n, vector<char>(2*n));
		int prev = 0, curr = 0;
		for(int i = 0; i < 2*n ; i+=2) {
			for(int j = 0; j < 2*n; j +=2) {
				if(curr%2 == 0) {
					g[i][j] = '#';
					g[i+1][j] = '#';
					g[i][j+1] = '#';
					g[i+1][j+1] = '#';
				}
				else {	
					g[i][j] = '.';
					g[i+1][j] = '.';
					g[i][j+1] = '.';
					g[i+1][j+1] = '.';
				}
				curr++;
			}
			if(prev == 0) curr = 1;
			else curr = 0;
			if(prev == 0) prev = 1;
			else prev = 0;
		}
		for(int i = 0; i < 2*n; i++) {
			for(int j = 0; j < 2*n; j++) {
				cout << g[i][j];
			}
			cout << "\n";
		}
	}


	return 0;
}
