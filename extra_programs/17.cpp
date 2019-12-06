// Problem link : https://www.spoj.com/problems/TOE1/

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
	int n;
	cin >> n;
	while(n--) {
		vector<vector<char>> grid(3, vector<char>(3));
		int count_x = 0, count_o = 0, winX = 0, winO = 0;
		rep(i, 0, 3) {
			rep(j, 0, 3) {
				cin >> grid[i][j];
				if(grid[i][j] == 'x') 
					grid[i][j] = toupper(grid[i][j]);
				if(grid[i][j] == 'o')
					grid[i][j] = toupper(grid[i][j]);
				if(grid[i][j] == 'X')
					count_x++;
				if(grid[i][j] == 'O')
					count_o++;
			}
		}
				
		if(grid[1][1] != '.') {
			if(grid[1][1] == 'X') {
				if((grid[0][0] == 'X' && grid[2][2] == 'X') || (grid[0][2] == 'X' && grid[2][0] == 'X'))
					winX = 1;
				else if((grid[1][0] == 'X' && grid[1][2] == 'X') || (grid[0][1] == 'X' && grid[2][1] == 'X'))
					winX = 1;
			}
			else {				
				if((grid[0][0] == 'O' && grid[2][2] == 'O') || (grid[0][2] == 'O' && grid[2][0] == 'O'))
					winO = 1;
				else if((grid[1][0] == 'O' && grid[1][2] == 'O') || (grid[0][1] == 'O' && grid[2][1] == 'O'))
					winO = 1;
			}
		}
		if(grid[0][0] != '.') {
			if(grid[0][0] == 'X') {
				if((grid[0][1] == 'X' && grid[0][2] == 'X') || (grid[1][0] == 'X' && grid[2][0] == 'X'))
					winX = 1;
			}
			else {				
				if((grid[0][1] == 'O' && grid[0][2] == 'O') || (grid[1][0] == 'O' && grid[2][0] == 'O'))
					winO = 1;
			}
		}
		if(grid[2][2] != '.') {
			if(grid[2][2] == 'X') {
				if((grid[0][2] == 'X' && grid[1][2] == 'X') || (grid[2][0] == 'X' && grid[2][1] == 'X'))
					winX = 1;
			}
			else {				
				if((grid[0][2] == 'O' && grid[1][2] == 'O') || (grid[2][0] == 'O' && grid[2][1] == 'O'))
					winO = 1;
			}
		}
		int flag = 0;
		if(winX == 1 && winO == 1) flag = 1;
		else if(winX == 1 && winO == 0 && count_x != count_o+1) flag = 1;
		else if(winO == 1 && winX == 0 && count_x != count_o) flag = 1;
		else if(count_x != count_o && count_x != count_o+1) flag = 1;
		if(flag) cout  << "no\n";
		else cout << "yes\n";
	}	



	return 0;
}

