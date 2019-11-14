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
		int count_x = 0, count_o = 0, win_x = 0, win_o = 0, flag = 0;
		char ch;
		string s;
		rep(i, 0, 3) {
			rep(j, 0, 3) {
				cin >> ch;
				s += ch;
				if(ch == 'X') count_x++;
				else if(ch == 'O') count_o++;
			}
		}
		//cout << "s = " << s << "\n";
		if(s[4] != '.') {	
			if(s[4] == 'X') {
				if((s[0] == 'X' && s[8] == 'X') || (s[1] == 'X' && s[7] == 'X') || (s[2] == 'X' && s[6] == 'X') || (s[3] == 'X' && s[5] == 'X'))
					win_x = 1;
			}
			else {
				if((s[0] == 'O' && s[8] == 'O') || (s[1] == 'O' && s[7] == 'O') || (s[2] == 'O' && s[6] == 'O') || (s[3] == 'O' && s[5] == 'O'))
					win_o = 1;
			}
		}
		if(s[0] != '.') {
			if(s[0] == 'X') {
				if((s[1] == 'X' && s[2] == 'X') || (s[3] == 'X' && s[6] == 'X'))
					win_x = 1;
			}
			else {
				if((s[1] == 'O' && s[2] == 'O') || (s[3] == 'O' && s[6] == 'O'))
					win_o = 1;	
			}
		}
		if(s[8] != '.') {
			if(s[8] == 'X') {
				if((s[2] == 'X' && s[5] == 'X') || (s[6] == 'X' && s[7] == 'X'))
					win_x = 1;
			}
			else {
				if((s[2] == 'O' && s[5] == 'O') || (s[6] == 'O' && s[7] == 'O'))
					win_o = 1;
			}
		}

		if(win_x == 1 && win_o == 1) flag = 1;
		else {
			if(win_x == 1 && win_o == 0 && count_x != count_o+1)
				flag = 1;
			else if(win_x == 0 && win_o == 1 && count_x != count_o)
				flag = 1;
			else if(count_x != count_o+1 && count_x != count_o)
				flag = 1;
		}
		//cout << "win_x = " << win_x << "\n";
		//cout << "win_o = " << win_o << "\n";
		if(flag) cout << "no\n";
		else cout << "yes\n";

	}



	return 0;
}