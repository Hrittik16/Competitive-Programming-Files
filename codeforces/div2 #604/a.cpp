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
	int t;
	cin >> t;
	while(t--) {
		bool flag = 0;
		string s, str = "abc";
		cin >> s;
		if(s.length() == 1) {
			if(s == "?") cout << "a\n";
			else cout << s << "\n";
			continue;
		}
		rep(i, 1, s.length()) {
			if(s[i-1] == s[i] && s[i] != '?') {
				cout << "-1\n";
				flag = 1;
				break;
			}
		}
		if(flag) continue;
		rep(i, 0, s.length()) {
			if(s[i] == '?') {
				if(i == 0) {
					if(s[i+1] == 'a') s[i] = 'b';
					else if(s[i+1] == 'b') s[i] = 'a';
					else if(s[i+1] == 'c') s[i] = 'a';
					else s[i] = 'a';
				}
				else if(i == s.length()-1) {
					if(s[i-1] == 'a') s[i] = 'b';
					else if(s[i-1] == 'b') s[i] = 'a';
					else if(s[i-1] == 'c') s[i] = 'a';
					else s[i] = 'a';
				}
				else {
					rep(j, 0, str.length()) {
						if(str[j] != s[i-1] && str[j] != s[i+1]) {
							s[i] = str[j];
							break;
						}
					}
				}
			}
		}
		cout << s << "\n";
	}

	return 0;
}
