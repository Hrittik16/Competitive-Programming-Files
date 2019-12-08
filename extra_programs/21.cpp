// Problem Link : https://codeforces.com/contest/242/problem/C

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
	ll x0, y0, x1, y1;
	cin >> x0 >> y0 >> x1 >> y1;	
	ll n;
	cin >> n;
	set<pair<ll, ll>> s;
	map<pair<ll, ll>, ll> dist;
	while(n--) {
		ll r, a, b;
		cin >> r >> a >> b;
		repll(i, a, b+1) {
			s.insert({r, i});
			dist[{r, i}] = -1;
		}
	}
	queue<pair<ll, ll>> q;
	q.push({x0, y0});
	dist[{x0, y0}] = 0;
	vector<ll> moveX = {+1, -1, 0, 0, +1, -1, +1, -1};
	vector<ll> moveY = {0, 0, +1, -1, +1, +1, -1, -1};
	bool flag = 0;
	while(!q.empty()) {
		ll x, y;
		x = q.front().first;
		y = q.front().second;
		q.pop();
		if(x == x1 && y == y1) {
			flag = 1;
			cout << dist[{x1, y1}] << "\n";
			break;
		}
		for(ll i = 0; i < moveX.size(); i++) {
			if(dist[{x+moveX[i], y+moveY[i]}] == -1) {
				q.push({x+moveX[i], y+moveY[i]});
				dist[{x+moveX[i], y+moveY[i]}] = dist[{x, y}] + 1;
			}
		}
	}
	if(!flag) cout << "-1\n";
	return 0;
}
