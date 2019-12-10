// Problem Link : https://codeforces.com/contest/400/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<char>> g(n, vector<char>(m));
	int pos_g = 0, pos_s = 0, flag = 1;
	set<int> mx;
	rep(i, 0, n) {
		rep(j, 0, m) {
			cin >> g[i][j];
			if(g[i][j] == 'G') pos_g = j;
			else if(g[i][j] == 'S') pos_s = j;
		}
		if(pos_g > pos_s) {
			flag = 0;
		}
		else mx.insert(pos_s-pos_g);
	}

	if(!flag) cout << "-1\n";
	else {
		cout << mx.size() << "\n";
	}

	return 0;
}