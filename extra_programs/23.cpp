// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1402

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

ll findMin(vector<vector<ll>>& g, vl& value, ll x) {
	ll mn = 0;
	vector<bool> check(value.size(), 0);
	queue<ll> q;
	q.push(x);
	check[x] = 1;
	while(!q.empty()) {
		ll curr = q.front();
		q.pop();
		for(auto i: g[curr]) {
			if(i == x) continue;
			if(!check[i]) {
				q.push(i);
				check[i] = 1;
				mn += value[i];
			} 
		}
	}
	return mn;
}

bool is_dep(vector<vector<ll>>& g, ll i, ll x) {
	vector<bool> check(g.size(), 0);
	queue<ll> q;
	q.push(i);
	check[i] = 1;
	while(!q.empty()) {
		ll curr = q.front();
		q.pop();
		if(curr == x) return 1;
		for(auto j: g[curr]) {	
			if(j == x) return 1;
			if(!check[j]) {
				q.push(j);
				check[j] = 1;
			}
		}
	}
	return 0;
}

ll calMax(vector<vector<ll>>& g, vl& value, vector<bool>& check, ll i) {
	ll mx = 0;
	queue<ll> q;
	q.push(i);
	check[i] = 1;
	mx += value[i];
	while(!q.empty()) {
		ll curr = q.front();
		q.pop();
		for(auto j: g[curr]) {
			if(!check[j]) {
				q.push(j);
				check[j] = 1;
				mx += value[j];
			}
		}
	}
	return mx;
}

ll findMax(vector<vector<ll>>& g, vl& value, ll x) {
	ll mx = 0;
	vector<bool> check(g.size(), 0);
	repll(i, 1, g.size()) {
		if(i == x) continue;
		if(is_dep(g, i, x)) continue;
		if(check[i]) continue;
		mx += calMax(g, value, check, i);
	}
	return mx;
}

int main() {
	int t = 1;
	while(1) {
		ll v, e, x, y;
		cin >> v >> e;
		if(v == 0 && e == 0) break;
		vl value(v+1);
		vector<vector<ll>> g(v+1);
		repll(i, 1, v+1) cin >> value[i];
		repll(i, 0, e) {
			cin >> x >> y;
			g[x].pb(y);
		}
		ll q;
		cin >> q;
		cout << "Case #" << t << ":\n";
		while(q--) {
			cin >> x;
			ll mn = findMin(g, value, x);
			ll mx = findMax(g, value, x);
			cout << mx-mn << "\n";
		}
		cout << "\n";
		t++;
	}





	return 0;
}
