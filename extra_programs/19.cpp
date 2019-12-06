// Problem link : https://www.spoj.com/problems/TOE2/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

bool win(string s) {
	// Horizontal
	if((s[0] != '.' && s[0] == s[1] && s[1] == s[2]) ||
	   (s[3] != '.' && s[3] == s[4] && s[4] == s[5]) ||
	   (s[6] != '.' && s[6] == s[7] && s[7] == s[8]))
		return 1;
	// Vertical
	if((s[0] != '.' && s[0] == s[3] && s[3] == s[6]) ||
	   (s[1] != '.' && s[1] == s[4] && s[4] == s[7]) ||
	   (s[2] != '.' && s[2] == s[5] && s[5] == s[8]))
		return 1;
	// Diagonal
	if((s[0] != '.' && s[0] == s[4] && s[4] == s[8]) || 
	   (s[2] != '.' && s[2] == s[4] && s[4] == s[6]))
		return 1;
	return 0;
}

int main() {
	string grid;
	cin >> grid;
	while(grid != "end") {
		int countX = 0, countO = 0;
		rep(i, 0, 9) {
			if(grid[i] == 'X') countX++;
			else if(grid[i] == 'O') countO++;
		}
		string isValid = "invalid";
		if(win(grid)) {
		string beg = ".........";
		queue<pair<string, bool>> q;
		q.push({beg, 1});
		while(!q.empty()) {
			string curr = q.front().first;
			bool player = q.front().second;
			q.pop();
			if(curr == grid) {
				isValid = "valid";
				break;
			}
			if(win(curr)) continue;
			for(int i = 0; i < 9; i++) {
				if(curr[i] == '.') {
					curr[i] = (player?'X':'O');
					if(curr[i] == grid[i])
						q.push({curr, 1^player});
					curr[i] = '.';
				}
			}
		}
		}
		else if(countX+countO != 9) isValid = "invalid";
		else if(countX != countO && countX != countO+1) isValid = "invalid";
		else isValid = "valid";
		cout << isValid << "\n";
		cin >> grid;
	}	



	return 0;
}

