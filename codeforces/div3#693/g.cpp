// Currently it's the wrong answer. Will be updated soon
#include <bits/stdc++.h>
using namespace std;

#define int 				long long
#define f 					first
#define s 					second
#define pb 					push_back
#define mp 					make_pair
#define vi 					vector<int>
#define pii					pair<int, int>
#define mii					map<int, int>
#define all(a) 				(a).begin(),(a).end()
#define sz(x) 				(x).size()
#define rep(i, a, b) 		for(int i = a; i < b; i++)
#define pqb					priority_queue<int>
#define pqs					priority_queue<int, vi, greater<int>>
#define setbits(x)			__builtin_popcountll(x)
#define zerobits(x)			__builtin_ctzll(x) // counts number of leading 0's before 1st occurnace of 1
#define mod 				1000000007
#define inf					1e18+7
#define ps(x, y)			fixed << setprecision(y) << x
#define string_to_int(x)	stoi(x)
#define int_to_string(x)	to_string(x)
#define test				int T; cin >> T; while(T--)

void start() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

const int N = 2e5 + 7;

void calc_distance(vector<vector<int>>& graph, int n, vector<int>& dist) {
	queue<int> q;
	vector<bool> check(n + 1, 0);
	check[1] = 1;
	dist[1] = 0;
	q.push(1);
	while (!q.empty()) {
		int curr = q.front();
		q.pop();
		for (auto x : graph[curr]) {
			if (!check[x]) {
				check[x] = 1;
				q.push(x);
				dist[x] = dist[curr] + 1;
			}
		}
	}
}

void dfs(vector<vi>& graph, vi& dist, vector<bool>& vis, int i, int& mn, int life) {
	if (i == 1) {
		mn = dist[i];
		return;
	}

	for (auto x : graph[i]) {
		if (!vis[x]) {
			if (life == 0 && dist[i] >= dist[x]) break;
			else {
				if (dist[i] >= dist[x]) {
					dfs(graph, dist, vis, x, mn, life - 1);
				}
				else {
					mn = min(mn, dist[i]);
					dfs(graph, dist, vis, x, mn, life);
				}
			}
		}
	}
	return;
}

int32_t main() {
	start();
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<vector<int>> graph(n + 1);
		vi dist(n + 1, 0);
		rep(i, 0, m) {
			int x, y;
			cin >> x >> y;
			graph[x].pb(y);
		}

		calc_distance(graph, n, dist);

		rep(i, 1, n + 1) {
			int mn = dist[i];
			vector<bool> vis(n + 1);
			dfs(graph, dist, vis, i, mn, 1);
			cout << mn << " ";
		}
		cout << "\n";
	}



	return 0;
}