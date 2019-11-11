#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

bool win(vector<vector<char>>& g, char ch) {
	// Horizontal
	if(g[0][0] == g[0][1] == g[0][2] == ch)
		return 1;
	if(g[1][0] == g[1][1] == g[1][2] == ch)
		return 1;
	if(g[2][0] == g[2][1] == g[2][2] == ch)
		return 1;

	// Vertical 
	if(g[0][0] == g[1][0] == g[2][0] == ch)
		return 1;
	if(g[1][0] == g[1][1] == g[2][1] == ch)
		return 1;
	if(g[2][0] == g[2][1] == g[2][2] == ch)
		return 1;
	return 0;
} 

int main() {
		
	int n;
	cin >> n;

	while(n != 0) {
		int count_x = 0, count_o = 0;
		char ch, chr;
		vector<vector<char>> g(3, vector<char>(3));
		rep(i, 0, 3) {
			rep(j, 0, 3) {
				cin >> g[i][j];
				if(g[i][j] == 'X') count_x++;
				else if(g[i][j] == 'O') count_o++;
			}
		}
		cin.get(chr);
		
		if(count_x-count_o == 0) {
			if(win(g, 'X') && win(g, 'O')) cout << "no\n";
			else if(win(g, 'X')) cout << "no\n";
			else if(win(g, 'O')) cout << "yes\n";
			else cout << "yes\n";
		}
		else if(count_x-count_o == 1) {
			if(win(g, 'X') && win(g, 'O')) cout << "no\n";
			else if(win(g, 'X')) cout << "yes\n";
			else if(win(g, 'O')) cout << "no\n";
			else cout << "yes\n";
		}
		else
			cout << "no\n";

		n--;
	}



	return 0;
}