#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define pb push_back
#define all(x) x.begin(),x.end()

void bfs(vector<vector<bool>>& check, vector<vector<pair<ll, ll>>>& path, vector<vector<ll>>& dist, ll r, ll c) {
	queue<pair<ll, ll>> q;
	q.push({r, c});
	check[r][c] = 1;
	path[r][c] = {-1, -1};
	vl x = {1, 1, -1, -1};
	vl y = {-1, 1, -1, 1};
	while(!q.empty()) {
		auto t = q.front();
		q.pop();
		//cout << "t.first = " << t.first << " " << "t.second = " << t.second << "\n";
			for(ll i = 0; i < 4; i++) {
				if(t.first+x[i] < 0 || t.first+x[i] >= 8 || t.second+y[i] < 0 || t.second+y[i] >= 8)
					continue;
				if(check[t.first+x[i]][t.second+y[i]] == 0) {
					//cout << "#\n";
					q.push({t.first+x[i], t.second+y[i]});
					//cout << "##\n";
					check[t.first+x[i]][t.second+y[i]] = 1;
					//cout << "###\n";
					dist[t.first+x[i]][t.second+y[i]] = dist[t.first][t.second]+1;
					//cout << "####\n";
					//cout << "Hello World\n";
					path[t.first+x[i]][t.second+y[i]] = t;
					//cout << "#####\n";
				}
			}
	}
	//cout << "######\n";
}

int main() {

	ll t, r, c;
	cin >> t;
	while(t--) {
		cin >> r >> c;
		if(r == 1 && c == 1) {
			cout << "42\n";
			cout << "1 1\n";
			cout << "2 2\n";
			cout << "3 3\n";
			cout << "4 4\n";
			cout << "5 5\n";
			cout << "6 6\n";
			cout << "7 7\n";
			cout << "8 8\n";
			cout << "7 7\n";
			cout << "8 6\n";
			cout << "7 5\n";
			cout << "6 4\n";
			cout << "5 3\n";
			cout << "4 2\n";
			cout << "3 1\n";
			cout << "4 2\n";
			cout << "5 1\n";
			cout << "6 2\n";
			cout << "7 3\n";
			cout << "8 4\n";
			cout << "7 3\n";
			cout << "8 2\n";
			cout << "7 1\n";
			cout << "6 2\n";
			cout << "5 3\n";
			cout << "4 4\n";
			cout << "3 5\n";
			cout << "2 4\n";
			cout << "1 3\n";
			cout << "2 4\n";
			cout << "3 5\n";
			cout << "4 6\n";
			cout << "5 7\n";
			cout << "6 8\n";
			cout << "5 7\n";
			cout << "4 8\n";
			cout << "3 7\n";
			cout << "2 6\n";
			cout << "1 5\n";
			cout << "2 6\n";
			cout << "1 7\n";
			cout << "2 8\n";
		}
		else {

			vector<vector<bool>> check(8, vector<bool>(8, 0));
			vector<vector<pair<ll, ll>>> path(8, vector<pair<ll, ll>>(8));
			vector<vector<ll>> dist(8, vector<ll>(8, 0));
			bfs(check, path, dist, r-1, c-1);	
			cout << dist[0][0]+41+1 << "\n"; 
			vector<pair<ll, ll>> curr;
			curr.pb({1, 1});
			ll i = path[0][0].first, j = path[0][0].second;			
			
			while(i != -1 && j != -1) {
				curr.pb({i+1, j+1});
				ll temp1 = path[i][j].first;
				ll temp2 = path[i][j].second;
				i = temp1;
				j = temp2;
				
			}

			reverse(all(curr));
			for(auto x: curr)
				cout << x.first << " " << x.second << "\n";
			cout << "2 2\n";
			cout << "3 3\n";
			cout << "4 4\n";
			cout << "5 5\n";
			cout << "6 6\n";
			cout << "7 7\n";
			cout << "8 8\n";
			cout << "7 7\n";
			cout << "8 6\n";
			cout << "7 5\n";
			cout << "6 4\n";
			cout << "5 3\n";
			cout << "4 2\n";
			cout << "3 1\n";
			cout << "4 2\n";
			cout << "5 1\n";
			cout << "6 2\n";
			cout << "7 3\n";
			cout << "8 4\n";
			cout << "7 3\n";
			cout << "8 2\n";
			cout << "7 1\n";
			cout << "6 2\n";
			cout << "5 3\n";
			cout << "4 4\n";
			cout << "3 5\n";
			cout << "2 4\n";
			cout << "1 3\n";
			cout << "2 4\n";
			cout << "3 5\n";
			cout << "4 6\n";
			cout << "5 7\n";
			cout << "6 8\n";
			cout << "5 7\n";
			cout << "4 8\n";
			cout << "3 7\n";
			cout << "2 6\n";
			cout << "1 5\n";
			cout << "2 6\n";
			cout << "1 7\n";
			cout << "2 8\n";  
		}
	}



	return 0;
}
