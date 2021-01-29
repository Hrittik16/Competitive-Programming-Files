#include <bits/stdc++.h>
using namespace std;

#define int 				long long int
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

const int N = 2e5 + 7;
vi graph[N];
vi a(N), b(N);
bool vis[N];
vi parent(N);
vi arr;
int t, e, x;

void dfs(int beg) {
	vis[beg] = 1;
	arr.pb(beg);
	for (auto x : graph[beg]) {
		if (!vis[x]) {
			parent[x] = beg;
			dfs(x);
		}
	}
	arr.pb(parent[beg]);
}

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	rep(i, 0, n - 1) {
		cin >> a[i] >> b[i];
		graph[a[i]].pb(b[i]);
		graph[b[i]].pb(a[i]);
	}
	arr.pb(0);
	parent[1] = 0;
	dfs(1);

	vi pos[sz(arr)], val(sz(arr) + 1);

	rep(i, 0, sz(arr)) {
		pos[arr[i]].pb(i);
	}
	// rep(i, 0, sz(arr)) cout << arr[i] << "   ";
	// cout << "\n";
	int q;
	cin >> q;
	while (q--) {
		cin >> t >> e >> x;
		int num1, num2;
		if (t == 1) {
			num1 = a[e - 1];
			num2 = b[e - 1];
		}
		else {
			num1 = b[e - 1];
			num2 = a[e - 1];
		}
		int pos1 = pos[num1][0];
		int pos2 = -1;
		if (pos[num2][0] > pos1) pos2 = pos[num2][0];
		else {
			pos2 = lower_bound(all(pos[num2]), pos1) - pos[num2].begin();
			pos2 = pos[num2][pos2 - 1];
		}

		if (pos2 > pos1) {
			val[1] += x;
			val[pos2] -= x;
			int num = arr[pos2];
			int index = pos[num].back() + 1;
			val[index] += x;
		}
		else {
			int index = pos2 + 1;
			val[index] += x;
			int num = arr[pos1 - 1];
			int index2 = upper_bound(all(pos[num]), pos1) - pos[num].begin();
			val[pos[num][index2]] -= x;
		}
		// rep(i, 0, sz(arr)) cout << val[i] << "   ";
		// cout << "\n";
	}

	map<int, int> check;
	int curr = 0;
	rep(i, 1, sz(arr) - 1) {
		curr += val[i];
		if (check.find(arr[i]) == check.end()) {
			check[arr[i]] += curr;
		}
	}

	for (auto x : check) cout << x.second << "\n";


	return 0;
}
