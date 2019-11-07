// Problem link : https://codeforces.com/contest/88/problem/B
// Status : Unsolved
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

void print(pair<int, int>& p) {
	cout << p.first << " " << p.second << "\n";
}

int main() {
	int n, m, x, flag = 0;
	cin >> n >> m >> x;
	vector<pair<int, int>> s_loc;
	vector<pair<int, int>> loc;
	vector<vector<char>> vec(n, vector<char>(m));
	map<char, int> mp;
	rep(i, 0, n) {
		rep(j, 0, m) {
			char ch;
			cin >> ch;
			if(ch == 'S') {
				s_loc.pb({i, j});
			}
			vec[i][j] = ch;
			mp[ch]++;
			loc.pb({i, j});
		}
	}
	int q, total = 0;
	cin >> q;
	string s;
	cin >> s;
	rep(i, 0, s.length()) {
		int count = 0, count1 = 0;
		if(mp[s[i]]) continue;
		else {
			if(s[i] >= 'a' && s[i] <= 'z') {
				total = -1;
				break;
			}
			else {
				if(!mp['S']) {
					total = -1;
					break;
				}
				s[i] = tolower(s[i]);
				if(mp[s[i]]) {
					//cout << "s[i] = " << s[i] << "\n";
					rep(j, 0, n) {
						rep(k, 0, m) {
							if(vec[j][k] == s[i]) {
								count = 0;
								rep(l, 0, s_loc.size()) {
									pair<int, int> p1 = loc[j*m+k];
									pair<int, int> p2 = s_loc[l];
									if((p1.first-p2.first)*(p1.first-p2.first) + (p1.second-p2.second)*(p1.second-p2.second) <= x*x) count++;
								}
								if(count == 0) count1++;
							}
						}
					}
					if(count1 == mp[s[i]]) {
						cout << "s[i] = " << s[i] << "\n";
						total++;
					}
				}
				else {
					total = -1;
					break;
				}
			}
		}
	}

	cout << total << "\n";

	return 0;
}